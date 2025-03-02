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
    QLineEdit *username_Edit;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *password_Edit;
    QPushButton *loginButton;
    QLabel *logoLabel;
    QWidget *main_menu_page;
    QPushButton *logOut_Button;
    QPushButton *newTemplate_Button;
    QPushButton *loadTemplate_Button;
    QPushButton *testMode_Button;
    QLabel *logoLabel_2;
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
        stackedWidget->setGeometry(QRect(10, 8, 782, 441));
        stackedWidget->setStyleSheet(QString::fromUtf8("\n"
"/*QPushButton {\n"
"    font-family: \"Press Start 2P\";\n"
"    font-size: 14px;\n"
"    border: 2px solid #55aa00;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #38a752;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2a7a40;\n"
"    color: white;\n"
"}*/\n"
""));
        login_page = new QWidget();
        login_page->setObjectName("login_page");
        login_page->setStyleSheet(QString::fromUtf8("\n"
"#widget {\n"
"	border-radius:25px;\n"
"	border: 2px solid #000000;\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0.100962 rgba(34, 166, 178, 255),stop:0.543269 rgba(132, 213, 51, 255),stop:1 rgba(208, 255, 163, 255));\n"
"}\n"
"\n"
"#verticalLayout_3 {\n"
"	\n"
"	background-color: rgb(170, 0, 127);\n"
"}\n"
"\n"
"QLabel {\n"
"	color: #767e89;\n"
"	font: 36pt \"Segoe UI\";\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLabel#KRITICAL_Label {\n"
"	color:  #38a752;\n"
"}\n"
"\n"
"QLabel#H_Label {\n"
"	color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QLabel#T_Label {\n"
"	color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QLabel#Welcome {\n"
"	background: transparent;\n"
"	font-family: \"Press Start 2P\";\n"
"	color: #767e89;\n"
"	font-size: 20px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	background-color: rgb(248, 248, 248);\n"
"	border: 3px solid black;\n"
"	border-bottom: 2px solid #cccccc;\n"
"	border-radius: 25px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"	border-bottom: 2px solid #38a752;\n"
""
                        "}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: grey;\n"
"    font-style: italic;\n"
"}\n"
"\n"
"QPushButton {\n"
"	margin-top: 10px;\n"
"	font-family: \"Press Start 2P\";\n"
"	color: #ffffff;\n"
"	background-color: orange;\n"
"	border: 2px solid #000000;\n"
"	border-radius: 5px;\n"
"	padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover, QPushButton:clicked {\n"
"	\n"
"	background-color: rgb(194, 65, 0);\n"
"\n"
"}"));
        widget = new QWidget(login_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(270, 190, 241, 241));
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
        font.setFamilies({QString::fromUtf8("Press Start 2P")});
        font.setBold(false);
        font.setItalic(false);
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
        username_Edit = new QLineEdit(widget);
        username_Edit->setObjectName("username_Edit");
        username_Edit->setMinimumSize(QSize(200, 0));
        QFont font1;
        font1.setPointSize(13);
        username_Edit->setFont(font1);
        username_Edit->setStyleSheet(QString::fromUtf8(""));
        username_Edit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(username_Edit);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        password_Edit = new QLineEdit(widget);
        password_Edit->setObjectName("password_Edit");
        password_Edit->setFont(font1);
        password_Edit->setStyleSheet(QString::fromUtf8(""));
        password_Edit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(password_Edit);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        loginButton = new QPushButton(widget);
        loginButton->setObjectName("loginButton");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Press Start 2P")});
        loginButton->setFont(font2);
        loginButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(loginButton);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);

        logoLabel = new QLabel(login_page);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setGeometry(QRect(280, 20, 221, 161));
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
"QPushButton.templateButton {\n"
"    font-family: \"Press Start 2P\";\n"
"    font-size: 13px;\n"
"    color: rgb(255, 255, 255);\n"
"    background-color: orange; \n"
"    border: 2px solid #000000;\n"
"    border-radius: 10px;\n"
"	min-width: 170px;\n"
"    max-width: 170px;\n"
"    padding-top: 10px;\n"
"    padding-bottom: 10px;\n"
"    padding-left: 6px;\n"
"    padding-right: 6px;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton#newTemplate_Button {\n"
"    background-color: rgb(0, 143, 0);\n"
"}\n"
"\n"
"QPushButton#loadTemplate_Button {\n"
"    background-color: rgb(85, 85, 255);\n"
"}\n"
"\n"
"QPushButton#testMode_Button {\n"
"    background-color: rgb(255, 85, 0);\n"
"}\n"
"\n"
"\n"
"QPushButton#logOut_Button{\n"
"	\n"
"	color: rgb(255"
                        ", 255, 255);\n"
"	background-color: rgb(148, 148, 148);\n"
"	padding: 6px;\n"
"}\n"
"\n"
"QPushButton#logOut_Button:hover, QPushButton#logOut_Button:clicked {\n"
"	background-color: rgb(71, 71, 71);\n"
"}\n"
"\n"
"\n"
"QPushButton#newTemplate_Button{\n"
"	background-color: rgb(0, 143, 0);\n"
"}\n"
"\n"
"QPushButton#loadTemplate_Button{\n"
"	background-color: rgb(85, 85, 255);\n"
"}\n"
"\n"
"QPushButton#testMode_Button{\n"
"	\n"
"	background-color: rgb(255, 85, 0);\n"
"}\n"
"\n"
""));
        logOut_Button = new QPushButton(main_menu_page);
        logOut_Button->setObjectName("logOut_Button");
        logOut_Button->setGeometry(QRect(10, 10, 121, 51));
        newTemplate_Button = new QPushButton(main_menu_page);
        newTemplate_Button->setObjectName("newTemplate_Button");
        newTemplate_Button->setGeometry(QRect(90, 230, 131, 131));
        loadTemplate_Button = new QPushButton(main_menu_page);
        loadTemplate_Button->setObjectName("loadTemplate_Button");
        loadTemplate_Button->setGeometry(QRect(320, 230, 131, 131));
        testMode_Button = new QPushButton(main_menu_page);
        testMode_Button->setObjectName("testMode_Button");
        testMode_Button->setGeometry(QRect(540, 230, 131, 131));
        logoLabel_2 = new QLabel(main_menu_page);
        logoLabel_2->setObjectName("logoLabel_2");
        logoLabel_2->setGeometry(QRect(280, 20, 221, 161));
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
        username_Edit->setText(QString());
        username_Edit->setPlaceholderText(QString());
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        logoLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        logOut_Button->setText(QCoreApplication::translate("MainWindow", "LOG OUT", nullptr));
        newTemplate_Button->setText(QCoreApplication::translate("MainWindow", "New Template", nullptr));
        loadTemplate_Button->setText(QCoreApplication::translate("MainWindow", "Load Template", nullptr));
        testMode_Button->setText(QCoreApplication::translate("MainWindow", "Test Mode", nullptr));
        logoLabel_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
