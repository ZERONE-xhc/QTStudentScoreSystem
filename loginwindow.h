#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

signals:
    void loginSuccess();

private slots:
    void on_btSignIn_2_clicked();
    void on_btSignUp_2_clicked();

private:
    Ui::LoginWindow *ui;
    bool verifyLogin(const QString &username, const QString &password);
    void clearInput();
};

#endif // LOGINWINDOW_H
