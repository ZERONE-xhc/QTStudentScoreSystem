#include <QApplication>
#include "loginwindow.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginWindow loginWin;
    loginWin.show();

    MainWindow mainWin;

    QObject::connect(&loginWin, &LoginWindow::loginSuccess, &mainWin, &MainWindow::show);

    return a.exec();
}
