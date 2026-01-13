#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSortFilterProxyModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDate>
#include <QDebug>
#include <QPainter>
#include <QVBoxLayout>
#include <QLayoutItem>
#include <QString>
#include <QtCharts/QChart>
#include <QtCharts/QLineSeries>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChartView>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void initDatabase();

    void on_btn_add_clicked();

    void on_btn_delete_clicked();

    void on_btn_clear_clicked();

    void on_cb_class_currentTextChanged(const QString &arg1);

    void on_cb_course_currentTextChanged(const QString &arg1);

    void on_btn_stat_clicked();

    void on_btn_trend_clicked();

    void on_btn_chart_clicked();

    void on_btn_export_clicked();

    void on_btn_clearChart_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlTableModel *sqlModel;
    QSortFilterProxyModel *proxyModel;
    QChart *currentChart = nullptr;
    QChartView *chartView = nullptr;
    QString currentClass;
    QString currentCourse;

    bool checkInput();
    QString getStatResult();
    void refreshCourseAndClass();
    void clearChartLayout();
    void applyCombinedFilter();

};
#endif // MAINWINDOW_H
