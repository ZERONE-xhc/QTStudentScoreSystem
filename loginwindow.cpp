#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

// 引用全局数据库对象
extern QSqlDatabase db;

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("学生成绩与分析系统-登录");

    ui->inputUserPassword->setEchoMode(QLineEdit::Password);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

// 验证账号密码（从user表查询明文）
bool LoginWindow::verifyLogin(const QString &username, const QString &password)
{
    if (!db.isOpen()) {
        QMessageBox::critical(this, "错误", "数据库未连接！");
        return false;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM user WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        QMessageBox::critical(this, "错误", "查询失败：" + query.lastError().text());
        return false;
    }

    return query.next();
}

// 登录按钮点击事件
void LoginWindow::on_btSignIn_2_clicked()
{
    QString username = ui->inputUserName->text().trimmed();
    QString password = ui->inputUserPassword->text().trimmed();

    if (username.isEmpty()) {
        QMessageBox::warning(this, "提示", "请输入用户名！");
        ui->inputUserName->setFocus();
        return;
    }
    if (password.isEmpty()) {
        QMessageBox::warning(this, "提示", "请输入密码！");
        ui->inputUserPassword->setFocus();
        return;
    }

    if (verifyLogin(username, password)) {
        QMessageBox::information(this, "登录成功", "欢迎使用学生成绩与分析系统！");
        this->close();
        emit loginSuccess();
    } else {
        QMessageBox::critical(this, "登录失败", "用户名或密码错误，请重新输入！");
        ui->inputUserPassword->clear();
        ui->inputUserPassword->setFocus();
    }
}

// 注册按钮点击事件
void LoginWindow::on_btSignUp_2_clicked()
{
    QString username = ui->inputUserName->text().trimmed();
    QString password = ui->inputUserPassword->text().trimmed();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "提示", "请输入用户名和密码！");
        return;
    }

    if (!db.isOpen()) {
        QMessageBox::critical(this, "错误", "数据库未连接！");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO user (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec()) {
        QMessageBox::information(this, "注册成功", "账号注册完成！");
        clearInput();
    } else {
        if (query.lastError().text().contains("UNIQUE constraint failed")) {
            QMessageBox::critical(this, "注册失败", "用户名已存在！");
        } else {
            QMessageBox::critical(this, "注册失败", "错误：" + query.lastError().text());
        }
    }
}

// 清空输入框
void LoginWindow::clearInput()
{
    ui->inputUserName->clear();
    ui->inputUserPassword->clear();
    ui->inputUserName->setFocus();
}
