/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *le_name;
    QLabel *label_2;
    QLineEdit *le_class;
    QLabel *label_3;
    QLineEdit *le_course;
    QLabel *label_4;
    QSpinBox *sb_score;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_add;
    QPushButton *btn_delete;
    QPushButton *btn_clear;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QComboBox *cb_class;
    QLabel *label_7;
    QComboBox *cb_course;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *te_stat;
    QWidget *widget_chart;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_stat;
    QPushButton *btn_trend;
    QPushButton *btn_chart;
    QPushButton *btn_clearChart;
    QPushButton *btn_export;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(914, 599);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("/* ========== \345\205\250\345\261\200\346\240\267\345\274\217 ========== */\n"
"QMainWindow {\n"
"    background-color: #f5f7fa; /* \344\270\273\347\252\227\345\217\243\346\265\205\347\201\260\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* ========== \346\214\211\351\222\256\346\240\267\345\274\217 ========== */\n"
"QPushButton {\n"
"    background-color: #3498db; /* \344\270\273\350\211\262\350\260\203\357\274\232\350\223\235\350\211\262 */\n"
"    color: white;              /* \346\226\207\345\255\227\347\231\275\350\211\262 */\n"
"    border: none;              /* \346\227\240\350\276\271\346\241\206 */\n"
"    border-radius: 6px;        /* \345\234\206\350\247\2226px */\n"
"    padding: 6px 16px;         /* \345\206\205\350\276\271\350\267\235\357\274\232\344\270\212\344\270\2136px\357\274\214\345\267\246\345\217\26316px */\n"
"    font-size: 8pt;           /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256 */\n"
"QPushButton:hover {\n"
"    "
                        "background-color: #2980b9; /* \346\267\261\344\270\200\347\202\271\347\232\204\350\223\235\350\211\262 */\n"
"}\n"
"/* \351\274\240\346\240\207\346\214\211\344\270\213 */\n"
"QPushButton:pressed {\n"
"    background-color: #1f618d; /* \346\233\264\346\267\261\347\232\204\350\223\235\350\211\262 */\n"
"}\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QPushButton:disabled {\n"
"    background-color: #bdc3c7;\n"
"    color: #7f8c8d;\n"
"}\n"
"/* \346\270\205\347\251\272\345\233\276\350\241\250\346\214\211\351\222\256\347\211\271\346\256\212\346\240\267\345\274\217\357\274\210\347\272\242\350\211\262\357\274\211 */\n"
"QPushButton#btn_clearChart {\n"
"    background-color: #e74c3c;\n"
"}\n"
"QPushButton#btn_clearChart:hover {\n"
"    background-color: #c0392b;\n"
"}\n"
"/* \347\273\237\350\256\241\346\214\211\351\222\256\347\211\271\346\256\212\346\240\267\345\274\217\357\274\210\347\273\277\350\211\262\357\274\211 */\n"
"QPushButton#btn_stat {\n"
"    background-color: #2ecc71;\n"
"}\n"
"QPushButt"
                        "on#btn_stat:hover {\n"
"    background-color: #27ae60;\n"
"}\n"
"\n"
"/* ========== \350\276\223\345\205\245\346\241\206/\344\270\213\346\213\211\346\241\206/\346\225\260\345\255\227\346\241\206/\346\227\245\346\234\237\346\241\206 ========== */\n"
"QLineEdit, QComboBox, QSpinBox, QDateEdit {\n"
"    border: 1px solid #ddd;    /* \346\265\205\347\201\260\350\276\271\346\241\206 */\n"
"    border-radius: 4px;        /* \345\234\206\350\247\2224px */\n"
"    padding: 4px;              /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 8pt;           /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: white;   /* \347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"/* \350\201\232\347\204\246\346\227\266\346\240\267\345\274\217\357\274\210\350\223\235\350\211\262\350\276\271\346\241\206\357\274\211 */\n"
"QLineEdit:focus, QComboBox:focus, QSpinBox:focus, QDateEdit:focus {\n"
"    border-color: #3498db;\n"
"    outline: none;             /* \346\227\240\351\273\230\350"
                        "\256\244\345\244\226\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"/* ========== \344\270\213\346\213\211\346\241\206\345\274\271\345\207\272\345\210\227\350\241\250 ========== */\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 4px;\n"
"    background-color: white;\n"
"    selection-background-color: #3498db; /* \351\200\211\344\270\255\350\241\214\350\223\235\350\211\262 */\n"
"    selection-color: white;              /* \351\200\211\344\270\255\350\241\214\346\226\207\345\255\227\347\231\275\350\211\262 */\n"
"}\n"
"\n"
"/* ========== \350\241\250\346\240\274\346\240\267\345\274\217 ========== */\n"
"QTableView {\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 6px;        /* \350\241\250\346\240\274\345\234\206\350\247\222 */\n"
"    background-color: white;\n"
"    alternate-row-color: #f9f9f9; /* \351\232\224\350\241\214\346\265\205\347\201\260 */\n"
"    gridline-color: #eee;       /* \347\275\221\346\240\274\347\272\277\346\265\205\347\201\260 */\n"
"}\n"
"/* \350"
                        "\241\250\346\240\274\350\241\250\345\244\264 */\n"
"QTableView::horizontalHeader {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border: none;\n"
"}\n"
"QTableView::horizontalHeader::section {\n"
"    padding: 8px;\n"
"    border: none;\n"
"}\n"
"/* \350\241\250\346\240\274\345\236\202\347\233\264\350\241\250\345\244\264 */\n"
"QTableView::verticalHeader {\n"
"    background-color: #f5f7fa;\n"
"    border: none;\n"
"}\n"
"/* \350\241\250\346\240\274\351\200\211\344\270\255\350\241\214 */\n"
"QTableView::item:selected {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"}\n"
"\n"
"/* ========== \345\210\206\347\273\204\346\241\206\357\274\210GroupBox\357\274\211 ========== */\n"
"QGroupBox {\n"
"    font-weight: bold;         /* \346\240\207\351\242\230\345\212\240\347\262\227 */\n"
"    border: 1px solid #ddd;    /* \350\276\271\346\241\206 */\n"
"    border-radius: 8px;        /* \345\234\206\350\247\2228px */\n"
"    margin-top: 10px;          /* \351\241"
                        "\266\351\203\250\345\244\226\350\276\271\350\267\235 */\n"
"    padding-top: 10px;         /* \351\241\266\351\203\250\345\206\205\350\276\271\350\267\235 */\n"
"    background-color: white;   /* \347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"/* \345\210\206\347\273\204\346\241\206\346\240\207\351\242\230 */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;                /* \346\240\207\351\242\230\345\267\246\347\247\27310px */\n"
"    top: -3px;                 /* \346\240\207\351\242\230\344\270\212\347\247\2737px\357\274\210\346\202\254\346\265\256\346\225\210\346\236\234\357\274\211 */\n"
"    padding: 0 8px;            /* \346\240\207\351\242\230\345\267\246\345\217\263\345\206\205\350\276\271\350\267\235 */\n"
"    background-color: #f5f7fa; /* \346\240\207\351\242\230\350\203\214\346\231\257\344\270\216\344\270\273\347\252\227\345\217\243\344\270\200\350\207\264 */\n"
"}\n"
"\n"
"/* ========== \346\226\207\346\234\254\347\274\226\350\276\221\346\241\206\357\274"
                        "\210\347\273\237\350\256\241\345\214\272\357\274\211 ========== */\n"
"QTextEdit {\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 6px;\n"
"    background-color: white;\n"
"    padding: 8px;\n"
"    font-size: 8pt;\n"
"}\n"
"\n"
"/* ========== \346\240\207\347\255\276\346\240\267\345\274\217 ========== */\n"
"QLabel {\n"
"    font-size: 8pt;\n"
"    color: #2c3e50; /* \346\267\261\347\201\260\346\226\207\345\255\227\357\274\210\346\233\264\346\270\205\346\231\260\357\274\211 */\n"
"}\n"
"\n"
"/* ========== \345\233\276\350\241\250\345\256\271\345\231\250 ========== */\n"
"QWidget#widget_chart {\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 8px;\n"
"    background-color: white;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(280, 250));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        le_name = new QLineEdit(groupBox);
        le_name->setObjectName("le_name");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, le_name);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        le_class = new QLineEdit(groupBox);
        le_class->setObjectName("le_class");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, le_class);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        le_course = new QLineEdit(groupBox);
        le_course->setObjectName("le_course");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, le_course);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        sb_score = new QSpinBox(groupBox);
        sb_score->setObjectName("sb_score");
        sb_score->setMaximum(100);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, sb_score);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setCalendarPopup(true);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, dateEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_add = new QPushButton(groupBox);
        btn_add->setObjectName("btn_add");

        horizontalLayout->addWidget(btn_add);

        btn_delete = new QPushButton(groupBox);
        btn_delete->setObjectName("btn_delete");

        horizontalLayout->addWidget(btn_delete);

        btn_clear = new QPushButton(groupBox);
        btn_clear->setObjectName("btn_clear");

        horizontalLayout->addWidget(btn_clear);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox, 0, 0, 2, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMinimumSize(QSize(280, 100));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        groupBox_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 261, 83));
        formLayout_2 = new QFormLayout(layoutWidget);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_6);

        cb_class = new QComboBox(layoutWidget);
        cb_class->setObjectName("cb_class");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, cb_class);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_7);

        cb_course = new QComboBox(layoutWidget);
        cb_course->setObjectName("cb_course");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, cb_course);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        te_stat = new QTextEdit(centralwidget);
        te_stat->setObjectName("te_stat");
        te_stat->setMinimumSize(QSize(200, 0));
        te_stat->setReadOnly(true);

        verticalLayout_3->addWidget(te_stat);

        widget_chart = new QWidget(centralwidget);
        widget_chart->setObjectName("widget_chart");
        widget_chart->setMinimumSize(QSize(200, 200));

        verticalLayout_3->addWidget(widget_chart);


        gridLayout->addLayout(verticalLayout_3, 0, 4, 3, 1);

        horizontalSpacer = new QSpacerItem(83, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        btn_stat = new QPushButton(centralwidget);
        btn_stat->setObjectName("btn_stat");

        verticalLayout_2->addWidget(btn_stat);

        btn_trend = new QPushButton(centralwidget);
        btn_trend->setObjectName("btn_trend");

        verticalLayout_2->addWidget(btn_trend);

        btn_chart = new QPushButton(centralwidget);
        btn_chart->setObjectName("btn_chart");

        verticalLayout_2->addWidget(btn_chart);

        btn_clearChart = new QPushButton(centralwidget);
        btn_clearChart->setObjectName("btn_clearChart");

        verticalLayout_2->addWidget(btn_clearChart);

        btn_export = new QPushButton(centralwidget);
        btn_export->setObjectName("btn_export");

        verticalLayout_2->addWidget(btn_export);


        gridLayout->addLayout(verticalLayout_2, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(82, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);
        tableView->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(tableView, 2, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\346\225\260\346\215\256\345\275\225\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\350\200\203\350\257\225\346\227\266\351\227\264\357\274\232", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "yyyy-MM-dd", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\210\220\347\273\251", nullptr));
        btn_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\350\276\223\345\205\245", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247/\350\257\276\347\250\213\347\255\233\351\200\211", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\357\274\232", nullptr));
        btn_stat->setText(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\347\273\237\350\256\241\345\210\206\346\236\220", nullptr));
        btn_trend->setText(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\350\266\213\345\212\277\346\212\230\347\272\277\345\233\276", nullptr));
        btn_chart->setText(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\345\215\240\346\257\224\351\245\274\345\233\276", nullptr));
        btn_clearChart->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\233\276\350\241\250", nullptr));
        btn_export->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\346\210\220\347\273\251\346\212\245\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
