/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *login_page;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLabel *Welcome;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *smallLabel;
    QLineEdit *username_Edit;
    QVBoxLayout *verticalLayout_2;
    QLabel *smallLabel_2;
    QLineEdit *password_Edit;
    QPushButton *loginButton;
    QLabel *KRITICAL_Label;
    QLabel *T_Label;
    QLabel *H_Label;
    QWidget *main_menu_page;
    QLabel *H_Label_2;
    QLabel *KRITICAL_Label_2;
    QLabel *T_Label_2;
    QPushButton *logOut_Button;
    QPushButton *newTemplate_Button;
    QPushButton *loadTemplate_Button;
    QPushButton *testMode_Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 480);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 248);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(9, 9, 782, 419));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 248);"));
        login_page = new QWidget();
        login_page->setObjectName("login_page");
        login_page->setStyleSheet(QString::fromUtf8("\n"
"\n"
"#widget {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius:25px;\n"
"	border: 2px solid #55aa00;\n"
"}\n"
"\n"
"#verticalLayout_3 {\n"
"	\n"
"	background-color: rgb(170, 0, 127);\n"
"}\n"
"\n"
"QLabel {\n"
"	\n"
"	color: #767e89;\n"
"}\n"
"\n"
"QLabel#KRITICAL_Label {\n"
"	color:  #38a752;\n"
"	font: 36pt \"Segoe UI\";\n"
"}\n"
"\n"
"QLabel#H_Label {\n"
"	color: rgb(0, 0, 127);\n"
"	font: 36pt \"Segoe UI\";\n"
"}\n"
"\n"
"QLabel#T_Label {\n"
"	color: rgb(0, 0, 127);\n"
"	font: 36pt \"Segoe UI\";\n"
"}\n"
"\n"
"\n"
"\n"
"QLabel#Welcome {\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: #767e89;\n"
"}\n"
"\n"
"QLabel#smallLabel {\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: #767e89;\n"
"}\n"
"\n"
"QLabel#smallLabel_2 {\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: #767e89;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	background-color: rgb(248, 248, 248);\n"
"	border: none;\n"
"	border-bottom: 2px solid #cccccc;\n"
"	height: 20px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"	border-bot"
                        "tom: 2px solid #38a752;\n"
"}\n"
"\n"
"QPushButton {\n"
"	margin-top: 10px;\n"
"	background-color: rgb(85, 255, 127);\n"
"	border: 2px solid #55aa00;\n"
"	color: rgb(23, 107, 10);\n"
"	color: #fff;\n"
"	border-radius: 5px;\n"
"	padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover, QPushButton:clicked {\n"
"	background-color: #38a752;\n"
"\n"
"}"));
        widget = new QWidget(login_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(270, 170, 241, 241));
        widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(45, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName("verticalLayout_4");
        Welcome = new QLabel(widget);
        Welcome->setObjectName("Welcome");
        QFont font;
        font.setPointSize(18);
        Welcome->setFont(font);
        Welcome->setStyleSheet(QString::fromUtf8("horizontalAlignment: AlignHCenter;\n"
"color: rgb(0, 0, 0);"));
        Welcome->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(Welcome);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(15);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        smallLabel = new QLabel(widget);
        smallLabel->setObjectName("smallLabel");
        QFont font1;
        font1.setPointSize(10);
        smallLabel->setFont(font1);
        smallLabel->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(smallLabel);

        username_Edit = new QLineEdit(widget);
        username_Edit->setObjectName("username_Edit");
        username_Edit->setMinimumSize(QSize(200, 0));
        QFont font2;
        font2.setPointSize(13);
        username_Edit->setFont(font2);
        username_Edit->setStyleSheet(QString::fromUtf8(""));
        username_Edit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(username_Edit);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        smallLabel_2 = new QLabel(widget);
        smallLabel_2->setObjectName("smallLabel_2");
        smallLabel_2->setFont(font1);
        smallLabel_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(smallLabel_2);

        password_Edit = new QLineEdit(widget);
        password_Edit->setObjectName("password_Edit");
        password_Edit->setFont(font2);
        password_Edit->setStyleSheet(QString::fromUtf8(""));
        password_Edit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(password_Edit);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        loginButton = new QPushButton(widget);
        loginButton->setObjectName("loginButton");
        QFont font3;
        font3.setPointSize(12);
        loginButton->setFont(font3);
        loginButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(loginButton);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);

        KRITICAL_Label = new QLabel(login_page);
        KRITICAL_Label->setObjectName("KRITICAL_Label");
        KRITICAL_Label->setGeometry(QRect(290, 50, 201, 41));
        T_Label = new QLabel(login_page);
        T_Label->setObjectName("T_Label");
        T_Label->setGeometry(QRect(390, 100, 31, 41));
        H_Label = new QLabel(login_page);
        H_Label->setObjectName("H_Label");
        H_Label->setGeometry(QRect(370, 0, 31, 41));
        stackedWidget->addWidget(login_page);
        main_menu_page = new QWidget();
        main_menu_page->setObjectName("main_menu_page");
        main_menu_page->setStyleSheet(QString::fromUtf8("\n"
"QLabel#KRITICAL_Label_2 {\n"
"	color:  #38a752;\n"
"	font: 36pt \"Segoe UI\";\n"
"}\n"
"\n"
"QLabel#H_Label_2 {\n"
"	color: rgb(0, 0, 127);\n"
"	font: 36pt \"Segoe UI\";\n"
"}\n"
"\n"
"QLabel#T_Label_2 {\n"
"	color: rgb(0, 0, 127);\n"
"	font: 36pt \"Segoe UI\";\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton#logOut_Button{\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(148, 148, 148);\n"
"	font-size: 15px;\n"
"	setWordWrap: true;\n"
"}\n"
"\n"
"QPushButton#logOut_Button:hover, QPushButton#logOut_Button:clicked {\n"
"	background-color: rgb(71, 71, 71);\n"
"}\n"
"\n"
"\n"
"QPushButton#newTemplate_Button{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(85, 255, 0);\n"
"	font-size: 20px;\n"
"	setWordWrap: true;\n"
"}\n"
"\n"
"QPushButton#loadTemplate_Button{\n"
"	background-color: rgb(85, 85, 255);\n"
"	font-size: 20px;\n"
"	setWordWrap: true;\n"
"}\n"
"\n"
"QPushButton#testMode_Button{\n"
"	background-color: rgb(255, 170, 0);\n"
""
                        "	font-size: 20px;\n"
"	setWordWrap: true;\n"
"}\n"
"\n"
""));
        H_Label_2 = new QLabel(main_menu_page);
        H_Label_2->setObjectName("H_Label_2");
        H_Label_2->setGeometry(QRect(370, 0, 31, 41));
        KRITICAL_Label_2 = new QLabel(main_menu_page);
        KRITICAL_Label_2->setObjectName("KRITICAL_Label_2");
        KRITICAL_Label_2->setGeometry(QRect(290, 50, 201, 41));
        T_Label_2 = new QLabel(main_menu_page);
        T_Label_2->setObjectName("T_Label_2");
        T_Label_2->setGeometry(QRect(390, 100, 31, 41));
        logOut_Button = new QPushButton(main_menu_page);
        logOut_Button->setObjectName("logOut_Button");
        logOut_Button->setGeometry(QRect(30, 20, 121, 31));
        newTemplate_Button = new QPushButton(main_menu_page);
        newTemplate_Button->setObjectName("newTemplate_Button");
        newTemplate_Button->setGeometry(QRect(90, 200, 131, 131));
        loadTemplate_Button = new QPushButton(main_menu_page);
        loadTemplate_Button->setObjectName("loadTemplate_Button");
        loadTemplate_Button->setGeometry(QRect(320, 200, 131, 131));
        testMode_Button = new QPushButton(main_menu_page);
        testMode_Button->setObjectName("testMode_Button");
        testMode_Button->setGeometry(QRect(540, 200, 131, 131));
        stackedWidget->addWidget(main_menu_page);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Welcome->setText(QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        smallLabel->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        smallLabel_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        KRITICAL_Label->setText(QCoreApplication::translate("MainWindow", "KRITICAL", nullptr));
        T_Label->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        H_Label->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        H_Label_2->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        KRITICAL_Label_2->setText(QCoreApplication::translate("MainWindow", "KRITICAL", nullptr));
        T_Label_2->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        logOut_Button->setText(QCoreApplication::translate("MainWindow", "LOG OUT", nullptr));
        newTemplate_Button->setText(QCoreApplication::translate("MainWindow", "New Template", nullptr));
        loadTemplate_Button->setText(QCoreApplication::translate("MainWindow", "Load Template", nullptr));
        testMode_Button->setText(QCoreApplication::translate("MainWindow", "Test Mode", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
