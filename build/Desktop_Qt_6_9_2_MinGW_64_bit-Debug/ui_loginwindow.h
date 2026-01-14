/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *inputUserName;
    QLabel *label_3;
    QLineEdit *inputUserPassword;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btSignUp_2;
    QPushButton *btSignIn_2;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(929, 616);
        LoginWindow->setStyleSheet(QString::fromUtf8("/* \347\231\273\345\275\225\347\252\227\345\217\243\346\240\271Widget */\n"
"QWidget {\n"
"    background-color: #f5f7fa;\n"
"}\n"
"\n"
"/* \346\240\207\351\242\230\346\240\207\347\255\276\357\274\210\342\200\234\346\254\242\350\277\216\344\275\277\347\224\250\345\255\246\347\224\237\346\210\220\347\273\251\344\270\216\345\210\206\346\236\220\347\263\273\347\273\237\342\200\235\357\274\211 */\n"
"QLabel#label {\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"    color: #3498db;\n"
"    padding-bottom: 15px;\n"
"}\n"
"\n"
"/* \346\226\207\346\234\254\346\240\207\347\255\276\357\274\210\342\200\234\347\224\250\346\210\267\345\220\215:\342\200\235\342\200\234\345\257\206\347\240\201:\342\200\235\357\274\211 */\n"
"QLabel {\n"
"    font-size: 10pt;\n"
"    color: #2c3e50;\n"
"}\n"
"\n"
"/* \350\276\223\345\205\245\346\241\206\357\274\210\347\224\250\346\210\267\345\220\215\343\200\201\345\257\206\347\240\201\357\274\211 */\n"
"QLineEdit {\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 4px;\n"
"    "
                        "padding: 6px;\n"
"    font-size: 10pt;\n"
"    background-color: white;\n"
"}\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    outline: none;\n"
"}\n"
"/* \345\257\206\347\240\201\346\241\206\351\242\235\345\244\226\346\240\267\345\274\217\357\274\210\344\270\216\344\270\273\347\225\214\351\235\242\347\273\237\344\270\200\357\274\211 */\n"
"QLineEdit#inputUs...word_2 {\n"
"    echoMode: Password;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\357\274\210\347\231\273\345\275\225\343\200\201\346\263\250\345\206\214\357\274\211 */\n"
"QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 8px 16px;\n"
"    font-size: 10pt;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1f618d;\n"
"}\n"
"\n"
"QPushButton#btSignUp_2 {\n"
"    background-color: #2ecc71;\n"
"}\n"
"QPushButton#btSignUp_2:hover {\n"
"    background-color: #27ae60;\n"
"}"));
        widget = new QWidget(LoginWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(316, 176, 297, 264));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        inputUserName = new QLineEdit(widget);
        inputUserName->setObjectName("inputUserName");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, inputUserName);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        inputUserPassword = new QLineEdit(widget);
        inputUserPassword->setObjectName("inputUserPassword");
        inputUserPassword->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, inputUserPassword);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btSignUp_2 = new QPushButton(widget);
        btSignUp_2->setObjectName("btSignUp_2");

        horizontalLayout_3->addWidget(btSignUp_2);

        btSignIn_2 = new QPushButton(widget);
        btSignIn_2->setObjectName("btSignIn_2");

        horizontalLayout_3->addWidget(btSignIn_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\350\257\212\346\226\255\346\265\213\350\257\225\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        btSignUp_2->setText(QCoreApplication::translate("LoginWindow", "\346\263\250\345\206\214", nullptr));
        btSignIn_2->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
