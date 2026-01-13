#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("学生成绩与分析系统 (Qt6+SQLite+图表统计)");
    this->setMinimumSize(1000, 820);

    // 初始化数据库和表格数据
    initDatabase();

    // 初始化筛选代理模型
    proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(sqlModel);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyModel->setSortRole(Qt::EditRole);

    // 绑定表格视图并设置属性
    ui->tableView->setModel(proxyModel);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);

    // 刷新班级和课程下拉框数据
    refreshCourseAndClass();
}

MainWindow::~MainWindow()
{
    if(db.isOpen()){ db.close(); }
    clearChartLayout();
    delete ui;
}

// 初始化SQLite数据库 自动创建数据表
void MainWindow::initDatabase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./student_score.db");

    if(!db.open())
    {
        QMessageBox::critical(this, "数据库错误", "数据库打开失败：" + db.lastError().text());
        return;
    }

    QString sql_create = "CREATE TABLE IF NOT EXISTS student_score ("
                         "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                         "student_name VARCHAR(20) NOT NULL,"
                         "student_class VARCHAR(10) NOT NULL,"
                         "course_name VARCHAR(20) NOT NULL,"
                         "score INTEGER NOT NULL CHECK(score>=0 AND score<=100),"
                         "exam_time DATE NOT NULL);";
    QSqlQuery query;
    if(!query.exec(sql_create))
    {
        QMessageBox::warning(this, "建表提示", "数据表创建失败：" + query.lastError().text());
    }

    sqlModel = new QSqlTableModel(this, db);
    sqlModel->setTable("student_score");
    sqlModel->setEditStrategy(QSqlTableModel::OnFieldChange);
    sqlModel->select();

    // 设置表格表头名称
    sqlModel->setHeaderData(1, Qt::Horizontal, "学生姓名");
    sqlModel->setHeaderData(2, Qt::Horizontal, "班级");
    sqlModel->setHeaderData(3, Qt::Horizontal, "课程");
    sqlModel->setHeaderData(4, Qt::Horizontal, "成绩");
    sqlModel->setHeaderData(5, Qt::Horizontal, "考试时间");
}

// 输入合法性校验
bool MainWindow::checkInput()
{
    if(ui->le_name->text().isEmpty()){ QMessageBox::warning(this, "提示", "请输入学生姓名！"); return false; }
    if(ui->le_class->text().isEmpty()){ QMessageBox::warning(this, "提示", "请输入班级！"); return false; }
    if(ui->le_course->text().isEmpty()){ QMessageBox::warning(this, "提示", "请输入课程名称！"); return false; }
    int score = ui->sb_score->value();
    if(score <0 || score >100){ QMessageBox::warning(this, "提示", "成绩必须在 0-100 分之间！"); return false; }
    return true;
}

// 添加成绩数据
void MainWindow::on_btn_add_clicked()
{
    if(!checkInput()) return;

    int row = sqlModel->rowCount();
    sqlModel->insertRow(row);
    sqlModel->setData(sqlModel->index(row, 1), ui->le_name->text());
    sqlModel->setData(sqlModel->index(row, 2), ui->le_class->text());
    sqlModel->setData(sqlModel->index(row, 3), ui->le_course->text());
    sqlModel->setData(sqlModel->index(row, 4), ui->sb_score->value());
    sqlModel->setData(sqlModel->index(row, 5), ui->dateEdit->date().toString("yyyy-MM-dd"));

    if(sqlModel->submitAll())
    {
        QMessageBox::information(this, "操作成功", "成绩数据添加完成！");
        refreshCourseAndClass();
        on_btn_clear_clicked();
    }
    else
    {
        QMessageBox::critical(this, "操作失败", "成绩添加失败：" + sqlModel->lastError().text());
    }
}

// 删除选中数据 - 对应UI btn_delete
void MainWindow::on_btn_delete_clicked()
{
    QModelIndex curIndex = ui->tableView->currentIndex();
    if(!curIndex.isValid())
    {
        QMessageBox::warning(this, "提示", "请选中要删除的数据行！");
        return;
    }

    if(QMessageBox::question(this, "确认删除", "确定要删除选中的成绩数据吗？") == QMessageBox::Yes)
    {
        proxyModel->removeRow(curIndex.row());
        sqlModel->submitAll();
        sqlModel->select();
        refreshCourseAndClass();
    }
}

// 清空输入框 - 对应UI btn_clear
void MainWindow::on_btn_clear_clicked()
{
    ui->le_name->clear();
    ui->le_class->clear();
    ui->le_course->clear();
    ui->sb_score->setValue(60);
    ui->dateEdit->setDate(QDate::currentDate());
}

// 班级筛选下拉框
void MainWindow::on_cb_class_currentTextChanged(const QString &arg1)
{
    QString filterText = (arg1 == "全部班级") ? "" : arg1;
    proxyModel->setFilterKeyColumn(2);
    proxyModel->setFilterFixedString(filterText);
    ui->tableView->resizeColumnsToContents();
}


// 刷新班级和课程下拉框数据
void MainWindow::on_cb_course_currentTextChanged(const QString &arg1)
{
    QString filterText = (arg1 == "全部课程") ? "" : arg1;
    proxyModel->setFilterKeyColumn(3);
    proxyModel->setFilterFixedString(filterText);
    ui->tableView->resizeColumnsToContents();
}

// 生成统计结果文本
QString MainWindow::getStatResult()
{
    QString selClass = ui->cb_class->currentText() == "全部班级" ? "" : ui->cb_class->currentText();
    QString selCourse = ui->cb_course->currentText() == "全部课程" ? "" : ui->cb_course->currentText();

    QString whereSql = " WHERE 1=1 ";
    if(!selClass.isEmpty()) whereSql += " AND student_class = '" + selClass + "'";
    if(!selCourse.isEmpty()) whereSql += " AND course_name = '" + selCourse + "'";

    QString sql = "SELECT COUNT(*),AVG(score),MAX(score),MIN(score) FROM student_score " + whereSql;
    QSqlQuery query;
    query.exec(sql);
    query.next();

    int totalNum = query.value(0).toInt();
    double avgScore = query.value(1).toDouble();
    int maxScore = query.value(2).toInt();
    int minScore = query.value(3).toInt();

    // 及格率(≥60)
    query.exec("SELECT COUNT(*) FROM student_score " + whereSql + " AND score >=60");
    query.next();
    double passRate = totalNum>0 ? (query.value(0).toInt()*100.0)/totalNum : 0;

    // 优秀率(≥85)
    query.exec("SELECT COUNT(*) FROM student_score " + whereSql + " AND score >=85");
    query.next();
    double goodRate = totalNum>0 ? (query.value(0).toInt()*100.0)/totalNum : 0;

    QString res;
    res += "========== 学生成绩统计分析报表 ==========\n";
    res += "统计范围：" + (selClass.isEmpty()?"所有班级":selClass) + " | " + (selCourse.isEmpty()?"所有课程":selCourse) + "\n";
    res += "-----------------------------------------\n";
    res += "统计总条数 ：" + QString::number(totalNum) + "\n";
    res += "平均分     ：" + QString::number(avgScore, 'f', 1) + " 分\n";
    res += "最高分     ：" + QString::number(maxScore) + " 分\n";
    res += "最低分     ：" + QString::number(minScore) + " 分\n";
    res += "及格率(≥60)：" + QString::number(passRate, 'f', 1) + "%\n";
    res += "优秀率(≥85)：" + QString::number(goodRate, 'f', 1) + "%\n";
    res += "=========================================\n";
    return res;
}

void MainWindow::refreshCourseAndClass()
{
    ui->cb_class->clear();
    ui->cb_course->clear();
    ui->cb_class->addItem("全部班级");
    ui->cb_course->addItem("全部课程");

    QSqlQuery query;
    query.exec("SELECT DISTINCT student_class FROM student_score ORDER BY student_class");
    while(query.next()){ ui->cb_class->addItem(query.value(0).toString()); }

    query.exec("SELECT DISTINCT course_name FROM student_score ORDER BY course_name");
    while(query.next()){ ui->cb_course->addItem(query.value(0).toString()); }
}

// 成绩统计分析
void MainWindow::on_btn_stat_clicked()
{
    ui->te_stat->setText(getStatResult());
}

// 清理图表容器 释放内存 防止内存泄漏
void MainWindow::clearChartLayout()
{
    if(chartView) { delete chartView; chartView = nullptr; }
    if(currentChart) { delete currentChart; currentChart = nullptr; }

    QLayout *lay = ui->widget_chart->layout();
    if(lay)
    {
        QLayoutItem *item;
        while((item = lay->takeAt(0)) != nullptr)
        {
            delete item->widget();
            delete item;
        }
        delete lay;
    }
}

// 成绩趋势折线图
void MainWindow::on_btn_trend_clicked()
{
    clearChartLayout();
    QString stuName = "";
    QString courseName = "";

    QModelIndex curIndex = ui->tableView->currentIndex();
    if(curIndex.isValid())
    {
        // 从选中行读取 学生姓名(第1列) + 课程名称(第3列)
        stuName = proxyModel->data(proxyModel->index(curIndex.row(), 1)).toString();
        courseName = proxyModel->data(proxyModel->index(curIndex.row(), 3)).toString();
    }
    else
    {
        stuName = ui->le_name->text().trimmed();
        courseName = ui->le_course->text().trimmed();
    }

    if(stuName.isEmpty() || courseName.isEmpty())
    {
        QMessageBox::information(this, "操作提示", "请先在表格中选中要查询的学生行，或在顶部输入框填写姓名+课程！");
        return;
    }

    QString sql = "SELECT score,exam_time FROM student_score WHERE student_name='%1' AND course_name='%2' ORDER BY exam_time ASC";
    QSqlQuery query;
    query.exec(sql.arg(stuName).arg(courseName));

    QLineSeries *series = new QLineSeries();
    series->setName(stuName + " - " + courseName + " 成绩变化");
    QString trendDetail = "\n【" + stuName + " - " + courseName + " 成绩趋势明细】\n";
    int examIndex = 0;
    while(query.next())
    {
        int score = query.value(0).toInt();
        QString examDate = query.value(1).toString();
        series->append(examIndex, score);
        trendDetail += examDate + " ： " + QString::number(score) + " 分\n";
        examIndex++;
    }

    if(examIndex == 0)
    {
        QMessageBox::information(this, "查询结果", "未查询到【"+stuName+"】的【"+courseName+"】成绩数据！");
        delete series;
        return;
    }

    currentChart = new QChart();
    currentChart->addSeries(series);
    currentChart->setTitle(stuName + " - " + courseName + " 成绩变化趋势图");
    currentChart->createDefaultAxes();
    currentChart->axisY()->setRange(0, 100);
    currentChart->axisY()->setTitleText("成绩 (分)");
    currentChart->axisX()->setTitleText("考试次数");

    chartView = new QChartView(currentChart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QVBoxLayout *layout = new QVBoxLayout(ui->widget_chart);
    layout->setContentsMargins(0,0,0,0);
    layout->addWidget(chartView);
    ui->widget_chart->setLayout(layout);

    // 趋势明细追加到统计文本区
    ui->te_stat->append(trendDetail);
}

// 成绩占比饼图
void MainWindow::on_btn_chart_clicked()
{
    clearChartLayout();

    QString selClass = ui->cb_class->currentText().trimmed();
    QString selCourse = ui->cb_course->currentText().trimmed();

    QString whereSql = " WHERE 1=1 ";
    if(selClass != "全部班级")
    {
        whereSql += " AND student_class = '" + selClass + "'";
    }
    if(selCourse != "全部课程")
    {
        whereSql += " AND course_name = '" + selCourse + "'";
    }

    QString sql = "SELECT score FROM student_score " + whereSql;
    QSqlQuery query;
    if(!query.exec(sql))
    {
        QMessageBox::critical(this, "查询错误", "成绩数据查询失败：" + query.lastError().text());
        return;
    }

    int fail=0, pass=0, good=0, excellent=0;
    int totalCount = 0; // 统计总数据量
    while(query.next())
    {
        int sc = query.value(0).toInt();
        totalCount++;
        if(sc <60)      fail++;
        else if(sc <70) pass++;
        else if(sc <85) good++;
        else            excellent++;
    }

    if(totalCount == 0)
    {
        QMessageBox::information(this, "查询结果", "当前筛选条件下，暂无成绩数据可生成饼图！");
        return;
    }

    QPieSeries *series = new QPieSeries();
    if(fail>0)      series->append("不及格(<60分)", fail);
    if(pass>0)      series->append("及格(60~69分)", pass);
    if(good>0)      series->append("良好(70~84分)", good);
    if(excellent>0) series->append("优秀(≥85分)", excellent);

    QChart *currentChart = new QChart();
    currentChart->addSeries(series);
    QString chartTitle = (selClass == "全部班级" ? "所有班级" : selClass) + " - ";
    chartTitle += (selCourse == "全部课程" ? "所有课程" : selCourse) + " 成绩等级占比统计";
    currentChart->setTitle(chartTitle);
    currentChart->legend()->setAlignment(Qt::AlignRight);

    QChartView *chartView = new QChartView(currentChart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // 绑定图表到UI的widget_chart容器
    QVBoxLayout *layout = new QVBoxLayout(ui->widget_chart);
    layout->setContentsMargins(0,0,0,0);
    layout->addWidget(chartView);
    ui->widget_chart->setLayout(layout);
}

// 导出成绩报表
void MainWindow::on_btn_export_clicked()
{
    QString fileName = "./成绩统计报表_" + QDate::currentDate().toString("yyyyMMdd") + ".csv";
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate))
    {
        QMessageBox::critical(this, "导出失败", "文件写入失败，请检查文件权限！");
        return;
    }

    QTextStream out(&file);
    out << ui->te_stat->toPlainText() << "\n\n";
    out << "序号,学生姓名,班级,课程名称,成绩,考试时间\n";

    for(int i=0; i<proxyModel->rowCount(); i++)
    {
        QStringList rowData;
        for(int j=0; j<6; j++)
        {
            rowData << proxyModel->data(proxyModel->index(i,j)).toString();
        }
        out << rowData.join(",") << "\n";
    }

    file.close();
    QMessageBox::information(this, "导出成功", "成绩报表已导出至程序目录：\n" + fileName);
}

void MainWindow::on_btn_clearChart_clicked()
{
    clearChartLayout();
    QMessageBox::information(this, "操作成功", "图表已清空！");
    ui->widget_chart->update();
}

