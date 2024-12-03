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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Login_Page;
    QWidget *formWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *I;
    QLabel *H;
    QLabel *T;
    QLabel *CAL;
    QLabel *KRIT;
    QWidget *Main_Menu_Page;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_Picture2;
    QLabel *I_2;
    QLabel *KRIT_2;
    QLabel *CAL_2;
    QLabel *T_2;
    QLabel *H_2;
    QWidget *Template_Gallery_Main_Page;
    QTextBrowser *textBrowser_5;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QWidget *verticalWidget_2;
    QToolButton *toolButton_7;
    QLabel *label_4;
    QPushButton *pushButton_9;
    QTextEdit *textEdit;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QWidget *Template_Menu_Page;
    QLabel *label_Picture;
    QPushButton *pushButton_6;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_19;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QPushButton *pushButton_30;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QLabel *label_5;
    QWidget *Rules_Menu_Page;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton_23;
    QWidget *Characters_Menu_Page;
    QLabel *label_18;
    QLabel *label_17;
    QPushButton *pushButton_31;
    QWidget *Stats_Menu_Page;
    QLabel *label_20;
    QLabel *label_19;
    QPushButton *pushButton_33;
    QWidget *Skills_Menu_Page;
    QLabel *label_22;
    QLabel *label_21;
    QPushButton *pushButton_32;
    QWidget *Statuses_Menu_Page;
    QLabel *label_24;
    QLabel *label_23;
    QPushButton *pushButton_34;
    QWidget *Template_Gallery_Template_Menu_Page;
    QPushButton *pushButton_59;
    QPushButton *pushButton_60;
    QPushButton *pushButton_61;
    QLabel *label_13;
    QPushButton *pushButton_62;
    QPushButton *pushButton_63;
    QPushButton *pushButton_64;
    QPushButton *pushButton_65;
    QLabel *label_Picture_3;
    QPushButton *pushButton_66;
    QPushButton *pushButton_67;
    QPushButton *pushButton_68;
    QPushButton *pushButton_69;
    QWidget *verticalWidget_7;
    QToolButton *toolButton_12;
    QLabel *label_14;
    QPushButton *pushButton_70;
    QTextEdit *textEdit_7;
    QPushButton *pushButton_71;
    QPushButton *pushButton_72;
    QTextEdit *textEdit_8;
    QTextEdit *textEdit_9;
    QWidget *RPG_Style_Page;
    QWidget *verticalWidget;
    QToolButton *toolButton_6;
    QLabel *label_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *RPG_Default_Style_Page;
    QWidget *verticalWidget_3;
    QToolButton *toolButton_10;
    QLabel *label_7;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, -20, 801, 661));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));
        Login_Page = new QWidget();
        Login_Page->setObjectName("Login_Page");
        formWidget = new QWidget(Login_Page);
        formWidget->setObjectName("formWidget");
        formWidget->setGeometry(QRect(280, 280, 251, 151));
        formWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);\n"
"border-color: rgb(200, 153, 31);\n"
"border: 3px solid orange;\n"
"border-radius: 5px;\n"
"\n"
""));
        formLayout = new QFormLayout(formWidget);
        formLayout->setObjectName("formLayout");
        label = new QLabel(formWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 900 9pt \"Segoe UI\";\n"
"border: 0px solid rgb(255, 85, 0)\n"
""));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, lineEdit);

        lineEdit_3 = new QLineEdit(formWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, lineEdit_3);

        pushButton = new QPushButton(formWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 900 9pt \"Segoe UI\";\n"
"color: rgb(255, 255, 0);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton);

        label_2 = new QLabel(formWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 900 9pt \"Segoe UI\";\n"
"border: 1px solid rgb(255, 85, 0)\n"
""));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        I = new QLabel(Login_Page);
        I->setObjectName("I");
        I->setGeometry(QRect(400, 110, 21, 51));
        I->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 900 36pt \"Segoe UI\";"));
        H = new QLabel(Login_Page);
        H->setObjectName("H");
        H->setGeometry(QRect(380, 50, 41, 51));
        H->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 900 36pt \"Segoe UI\";"));
        T = new QLabel(Login_Page);
        T->setObjectName("T");
        T->setGeometry(QRect(420, 170, 31, 51));
        T->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 900 36pt \"Segoe UI\";"));
        CAL = new QLabel(Login_Page);
        CAL->setObjectName("CAL");
        CAL->setGeometry(QRect(440, 110, 91, 51));
        CAL->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);\n"
"font: 900 36pt \"Segoe UI\";"));
        KRIT = new QLabel(Login_Page);
        KRIT->setObjectName("KRIT");
        KRIT->setGeometry(QRect(270, 110, 121, 51));
        KRIT->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);\n"
"font: 900 36pt \"Segoe UI\";"));
        stackedWidget->addWidget(Login_Page);
        Main_Menu_Page = new QWidget();
        Main_Menu_Page->setObjectName("Main_Menu_Page");
        pushButton_2 = new QPushButton(Main_Menu_Page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 490, 101, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";"));
        pushButton_3 = new QPushButton(Main_Menu_Page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(100, 270, 201, 71));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid white;\n"
"border-radius: 10px;"));
        pushButton_4 = new QPushButton(Main_Menu_Page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(310, 330, 201, 71));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid white;\n"
"border-radius: 10px;"));
        pushButton_5 = new QPushButton(Main_Menu_Page);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(520, 270, 201, 71));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid white;\n"
"border-radius: 10px;"));
        label_Picture2 = new QLabel(Main_Menu_Page);
        label_Picture2->setObjectName("label_Picture2");
        label_Picture2->setGeometry(QRect(260, 410, 291, 171));
        I_2 = new QLabel(Main_Menu_Page);
        I_2->setObjectName("I_2");
        I_2->setGeometry(QRect(400, 110, 21, 51));
        I_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 900 36pt \"Segoe UI\";"));
        KRIT_2 = new QLabel(Main_Menu_Page);
        KRIT_2->setObjectName("KRIT_2");
        KRIT_2->setGeometry(QRect(270, 110, 121, 51));
        KRIT_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);\n"
"font: 900 36pt \"Segoe UI\";"));
        CAL_2 = new QLabel(Main_Menu_Page);
        CAL_2->setObjectName("CAL_2");
        CAL_2->setGeometry(QRect(440, 110, 91, 51));
        CAL_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);\n"
"font: 900 36pt \"Segoe UI\";"));
        T_2 = new QLabel(Main_Menu_Page);
        T_2->setObjectName("T_2");
        T_2->setGeometry(QRect(420, 170, 31, 51));
        T_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 900 36pt \"Segoe UI\";"));
        H_2 = new QLabel(Main_Menu_Page);
        H_2->setObjectName("H_2");
        H_2->setGeometry(QRect(380, 50, 41, 51));
        H_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 900 36pt \"Segoe UI\";"));
        stackedWidget->addWidget(Main_Menu_Page);
        Template_Gallery_Main_Page = new QWidget();
        Template_Gallery_Main_Page->setObjectName("Template_Gallery_Main_Page");
        textBrowser_5 = new QTextBrowser(Template_Gallery_Main_Page);
        textBrowser_5->setObjectName("textBrowser_5");
        textBrowser_5->setGeometry(QRect(270, 20, 271, 231));
        pushButton_15 = new QPushButton(Template_Gallery_Main_Page);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(100, 270, 201, 71));
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"color: rgb(255, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";"));
        pushButton_16 = new QPushButton(Template_Gallery_Main_Page);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(310, 330, 201, 71));
        pushButton_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);\n"
"color: rgb(255, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";"));
        pushButton_17 = new QPushButton(Template_Gallery_Main_Page);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(520, 270, 201, 71));
        pushButton_17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid white;\n"
"border-radius: 10px;"));
        pushButton_18 = new QPushButton(Template_Gallery_Main_Page);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setGeometry(QRect(10, 480, 141, 61));
        pushButton_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";\n"
"border: 2px solid white;\n"
"border-radius: 10px;"));
        verticalWidget_2 = new QWidget(Template_Gallery_Main_Page);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setGeometry(QRect(100, 30, 451, 551));
        verticalWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"border: 3px solid white\n"
""));
        toolButton_7 = new QToolButton(verticalWidget_2);
        toolButton_7->setObjectName("toolButton_7");
        toolButton_7->setGeometry(QRect(360, 10, 80, 35));
        toolButton_7->setMinimumSize(QSize(80, 24));
        toolButton_7->setMaximumSize(QSize(80, 16777215));
        toolButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 italic 16pt \"Segoe UI\";\n"
"border: 2px solid black;\n"
"border-radius: 10px;\n"
"\n"
""));
        label_4 = new QLabel(verticalWidget_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(74, 42, 261, 36));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 italic 20pt \"Segoe UI\";\n"
"border: 0px solid white"));
        pushButton_9 = new QPushButton(verticalWidget_2);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(20, 100, 171, 121));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 112, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";"));
        textEdit = new QTextEdit(verticalWidget_2);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(200, 110, 231, 101));
        pushButton_10 = new QPushButton(verticalWidget_2);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(20, 240, 171, 121));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 112, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";"));
        pushButton_11 = new QPushButton(verticalWidget_2);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(20, 380, 171, 121));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 112, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";"));
        textEdit_2 = new QTextEdit(verticalWidget_2);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(200, 250, 231, 101));
        textEdit_3 = new QTextEdit(verticalWidget_2);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(200, 390, 231, 101));
        stackedWidget->addWidget(Template_Gallery_Main_Page);
        Template_Menu_Page = new QWidget();
        Template_Menu_Page->setObjectName("Template_Menu_Page");
        label_Picture = new QLabel(Template_Menu_Page);
        label_Picture->setObjectName("label_Picture");
        label_Picture->setGeometry(QRect(170, 160, 541, 371));
        pushButton_6 = new QPushButton(Template_Menu_Page);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(140, 110, 111, 51));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border: 3px solid white;\n"
"border-radius: 10px;\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        pushButton_12 = new QPushButton(Template_Menu_Page);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(250, 110, 111, 51));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"border: 3px solid white;\n"
"border-radius: 10px;\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        pushButton_13 = new QPushButton(Template_Menu_Page);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(360, 110, 111, 51));
        pushButton_13->setStyleSheet(QString::fromUtf8("border: 3px solid white;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 228, 26);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        pushButton_14 = new QPushButton(Template_Menu_Page);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(470, 110, 111, 51));
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"border: 3px solid white;\n"
"border-radius: 10px;\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        pushButton_19 = new QPushButton(Template_Menu_Page);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(580, 110, 111, 51));
        pushButton_19->setStyleSheet(QString::fromUtf8("border: 3px solid white;\n"
"border-radius: 10px;\n"
"background-color: rgb(170, 0, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        pushButton_28 = new QPushButton(Template_Menu_Page);
        pushButton_28->setObjectName("pushButton_28");
        pushButton_28->setGeometry(QRect(10, 80, 101, 71));
        pushButton_28->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid white;\n"
"border-radius: 10px;"));
        pushButton_29 = new QPushButton(Template_Menu_Page);
        pushButton_29->setObjectName("pushButton_29");
        pushButton_29->setGeometry(QRect(10, 180, 101, 71));
        pushButton_29->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid white;\n"
"border-radius: 10px;"));
        pushButton_30 = new QPushButton(Template_Menu_Page);
        pushButton_30->setObjectName("pushButton_30");
        pushButton_30->setGeometry(QRect(10, 280, 101, 71));
        pushButton_30->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid white;\n"
"border-radius: 10px;"));
        pushButton_20 = new QPushButton(Template_Menu_Page);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setGeometry(QRect(10, 500, 101, 51));
        pushButton_20->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";"));
        pushButton_21 = new QPushButton(Template_Menu_Page);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setGeometry(QRect(460, 460, 161, 51));
        pushButton_21->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";\n"
"border: 2px solid black;\n"
"border-radius: 10px;\n"
""));
        pushButton_22 = new QPushButton(Template_Menu_Page);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(580, 550, 181, 31));
        pushButton_22->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 900 12pt \"Segoe UI\";"));
        label_5 = new QLabel(Template_Menu_Page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 50, 261, 41));
        label_5->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(Template_Menu_Page);
        Rules_Menu_Page = new QWidget();
        Rules_Menu_Page->setObjectName("Rules_Menu_Page");
        Rules_Menu_Page->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_15 = new QLabel(Rules_Menu_Page);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(310, 120, 261, 41));
        label_15->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);"));
        label_16 = new QLabel(Rules_Menu_Page);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(260, 190, 351, 41));
        label_16->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);"));
        pushButton_23 = new QPushButton(Rules_Menu_Page);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setGeometry(QRect(40, 480, 101, 51));
        pushButton_23->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";"));
        stackedWidget->addWidget(Rules_Menu_Page);
        Characters_Menu_Page = new QWidget();
        Characters_Menu_Page->setObjectName("Characters_Menu_Page");
        Characters_Menu_Page->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        label_18 = new QLabel(Characters_Menu_Page);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(230, 200, 351, 41));
        label_18->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 170, 0);"));
        label_17 = new QLabel(Characters_Menu_Page);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(220, 120, 351, 41));
        label_17->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 170, 0);"));
        pushButton_31 = new QPushButton(Characters_Menu_Page);
        pushButton_31->setObjectName("pushButton_31");
        pushButton_31->setGeometry(QRect(50, 480, 101, 51));
        pushButton_31->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";"));
        stackedWidget->addWidget(Characters_Menu_Page);
        Stats_Menu_Page = new QWidget();
        Stats_Menu_Page->setObjectName("Stats_Menu_Page");
        Stats_Menu_Page->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        label_20 = new QLabel(Stats_Menu_Page);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(240, 210, 351, 41));
        label_20->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 0);"));
        label_19 = new QLabel(Stats_Menu_Page);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(290, 140, 261, 41));
        label_19->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 0);"));
        pushButton_33 = new QPushButton(Stats_Menu_Page);
        pushButton_33->setObjectName("pushButton_33");
        pushButton_33->setGeometry(QRect(50, 500, 101, 51));
        pushButton_33->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";"));
        stackedWidget->addWidget(Stats_Menu_Page);
        Skills_Menu_Page = new QWidget();
        Skills_Menu_Page->setObjectName("Skills_Menu_Page");
        Skills_Menu_Page->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        label_22 = new QLabel(Skills_Menu_Page);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(260, 130, 261, 41));
        label_22->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 170, 255);"));
        label_21 = new QLabel(Skills_Menu_Page);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(210, 200, 351, 41));
        label_21->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 170, 255);"));
        pushButton_32 = new QPushButton(Skills_Menu_Page);
        pushButton_32->setObjectName("pushButton_32");
        pushButton_32->setGeometry(QRect(50, 480, 101, 51));
        pushButton_32->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";"));
        stackedWidget->addWidget(Skills_Menu_Page);
        Statuses_Menu_Page = new QWidget();
        Statuses_Menu_Page->setObjectName("Statuses_Menu_Page");
        Statuses_Menu_Page->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 127);"));
        label_24 = new QLabel(Statuses_Menu_Page);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(260, 140, 261, 41));
        label_24->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 0, 127);"));
        label_23 = new QLabel(Statuses_Menu_Page);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(210, 210, 351, 41));
        label_23->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 0, 127);"));
        pushButton_34 = new QPushButton(Statuses_Menu_Page);
        pushButton_34->setObjectName("pushButton_34");
        pushButton_34->setGeometry(QRect(40, 490, 101, 51));
        pushButton_34->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";"));
        stackedWidget->addWidget(Statuses_Menu_Page);
        Template_Gallery_Template_Menu_Page = new QWidget();
        Template_Gallery_Template_Menu_Page->setObjectName("Template_Gallery_Template_Menu_Page");
        pushButton_59 = new QPushButton(Template_Gallery_Template_Menu_Page);
        pushButton_59->setObjectName("pushButton_59");
        pushButton_59->setGeometry(QRect(140, 110, 111, 51));
        pushButton_59->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border: 3px solid white;\n"
"border-radius: 10px;\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        pushButton_60 = new QPushButton(Template_Gallery_Template_Menu_Page);
        pushButton_60->setObjectName("pushButton_60");
        pushButton_60->setGeometry(QRect(10, 280, 101, 71));
        pushButton_60->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid white;\n"
"border-radius: 10px;"));
        pushButton_61 = new QPushButton(Template_Gallery_Template_Menu_Page);
        pushButton_61->setObjectName("pushButton_61");
        pushButton_61->setGeometry(QRect(470, 110, 111, 51));
        pushButton_61->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"border: 3px solid white;\n"
"border-radius: 10px;\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        label_13 = new QLabel(Template_Gallery_Template_Menu_Page);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(290, 50, 261, 41));
        label_13->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        pushButton_62 = new QPushButton(Template_Gallery_Template_Menu_Page);
        pushButton_62->setObjectName("pushButton_62");
        pushButton_62->setGeometry(QRect(250, 110, 111, 51));
        pushButton_62->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"border: 3px solid white;\n"
"border-radius: 10px;\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        pushButton_63 = new QPushButton(Template_Gallery_Template_Menu_Page);
        pushButton_63->setObjectName("pushButton_63");
        pushButton_63->setGeometry(QRect(580, 110, 111, 51));
        pushButton_63->setStyleSheet(QString::fromUtf8("border: 3px solid white;\n"
"border-radius: 10px;\n"
"background-color: rgb(170, 0, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        pushButton_64 = new QPushButton(Template_Gallery_Template_Menu_Page);
        pushButton_64->setObjectName("pushButton_64");
        pushButton_64->setGeometry(QRect(10, 80, 101, 71));
        pushButton_64->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid white;\n"
"border-radius: 10px;"));
        pushButton_65 = new QPushButton(Template_Gallery_Template_Menu_Page);
        pushButton_65->setObjectName("pushButton_65");
        pushButton_65->setGeometry(QRect(10, 500, 101, 51));
        pushButton_65->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";"));
        label_Picture_3 = new QLabel(Template_Gallery_Template_Menu_Page);
        label_Picture_3->setObjectName("label_Picture_3");
        label_Picture_3->setGeometry(QRect(170, 160, 541, 371));
        pushButton_66 = new QPushButton(Template_Gallery_Template_Menu_Page);
        pushButton_66->setObjectName("pushButton_66");
        pushButton_66->setGeometry(QRect(10, 180, 101, 71));
        pushButton_66->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid white;\n"
"border-radius: 10px;"));
        pushButton_67 = new QPushButton(Template_Gallery_Template_Menu_Page);
        pushButton_67->setObjectName("pushButton_67");
        pushButton_67->setGeometry(QRect(580, 550, 181, 31));
        pushButton_67->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 900 12pt \"Segoe UI\";"));
        pushButton_68 = new QPushButton(Template_Gallery_Template_Menu_Page);
        pushButton_68->setObjectName("pushButton_68");
        pushButton_68->setGeometry(QRect(360, 110, 111, 51));
        pushButton_68->setStyleSheet(QString::fromUtf8("border: 3px solid white;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 228, 26);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        pushButton_69 = new QPushButton(Template_Gallery_Template_Menu_Page);
        pushButton_69->setObjectName("pushButton_69");
        pushButton_69->setGeometry(QRect(460, 460, 161, 51));
        pushButton_69->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";\n"
"border: 2px solid black;\n"
"border-radius: 10px;\n"
""));
        verticalWidget_7 = new QWidget(Template_Gallery_Template_Menu_Page);
        verticalWidget_7->setObjectName("verticalWidget_7");
        verticalWidget_7->setGeometry(QRect(100, 40, 451, 551));
        verticalWidget_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"border: 3px solid white\n"
""));
        toolButton_12 = new QToolButton(verticalWidget_7);
        toolButton_12->setObjectName("toolButton_12");
        toolButton_12->setGeometry(QRect(360, 10, 80, 35));
        toolButton_12->setMinimumSize(QSize(80, 24));
        toolButton_12->setMaximumSize(QSize(80, 16777215));
        toolButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 italic 16pt \"Segoe UI\";\n"
"border: 2px solid black;\n"
"border-radius: 10px;\n"
"\n"
""));
        label_14 = new QLabel(verticalWidget_7);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(74, 42, 261, 36));
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 italic 20pt \"Segoe UI\";\n"
"border: 0px solid white"));
        pushButton_70 = new QPushButton(verticalWidget_7);
        pushButton_70->setObjectName("pushButton_70");
        pushButton_70->setGeometry(QRect(20, 100, 171, 121));
        pushButton_70->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 112, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";"));
        textEdit_7 = new QTextEdit(verticalWidget_7);
        textEdit_7->setObjectName("textEdit_7");
        textEdit_7->setGeometry(QRect(200, 110, 231, 101));
        pushButton_71 = new QPushButton(verticalWidget_7);
        pushButton_71->setObjectName("pushButton_71");
        pushButton_71->setGeometry(QRect(20, 240, 171, 121));
        pushButton_71->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 112, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";"));
        pushButton_72 = new QPushButton(verticalWidget_7);
        pushButton_72->setObjectName("pushButton_72");
        pushButton_72->setGeometry(QRect(20, 380, 171, 121));
        pushButton_72->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 112, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";"));
        textEdit_8 = new QTextEdit(verticalWidget_7);
        textEdit_8->setObjectName("textEdit_8");
        textEdit_8->setGeometry(QRect(200, 250, 231, 101));
        textEdit_9 = new QTextEdit(verticalWidget_7);
        textEdit_9->setObjectName("textEdit_9");
        textEdit_9->setGeometry(QRect(200, 390, 231, 101));
        stackedWidget->addWidget(Template_Gallery_Template_Menu_Page);
        RPG_Style_Page = new QWidget();
        RPG_Style_Page->setObjectName("RPG_Style_Page");
        verticalWidget = new QWidget(RPG_Style_Page);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setGeometry(QRect(180, 60, 447, 271));
        verticalWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"border: 3px solid white\n"
""));
        toolButton_6 = new QToolButton(verticalWidget);
        toolButton_6->setObjectName("toolButton_6");
        toolButton_6->setGeometry(QRect(360, 10, 80, 35));
        toolButton_6->setMinimumSize(QSize(80, 24));
        toolButton_6->setMaximumSize(QSize(80, 16777215));
        toolButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 italic 16pt \"Segoe UI\";\n"
"border: 2px solid black;\n"
"border-radius: 10px;\n"
"\n"
""));
        label_3 = new QLabel(verticalWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 50, 298, 36));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"color: rgb(85, 0, 255);\n"
"font: 900 italic 20pt \"Segoe UI\";\n"
"border: 0px solid yellow"));
        pushButton_7 = new QPushButton(verticalWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(50, 100, 142, 81));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Segoe UI\";\n"
"border: 3px solid black\n"
""));
        pushButton_8 = new QPushButton(verticalWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(240, 100, 142, 81));
        pushButton_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 255, 255);\n"
"font: 700 italic 14pt \"Segoe UI\";\n"
"border: 3px solid black\n"
""));
        stackedWidget->addWidget(RPG_Style_Page);
        RPG_Default_Style_Page = new QWidget();
        RPG_Default_Style_Page->setObjectName("RPG_Default_Style_Page");
        verticalWidget_3 = new QWidget(RPG_Default_Style_Page);
        verticalWidget_3->setObjectName("verticalWidget_3");
        verticalWidget_3->setGeometry(QRect(180, 60, 447, 321));
        verticalWidget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"border: 3px solid white\n"
""));
        toolButton_10 = new QToolButton(verticalWidget_3);
        toolButton_10->setObjectName("toolButton_10");
        toolButton_10->setGeometry(QRect(360, 10, 80, 35));
        toolButton_10->setMinimumSize(QSize(80, 24));
        toolButton_10->setMaximumSize(QSize(80, 16777215));
        toolButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 italic 16pt \"Segoe UI\";\n"
"border: 2px solid black;\n"
"border-radius: 10px;\n"
"\n"
""));
        label_7 = new QLabel(verticalWidget_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 20, 298, 36));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"color: rgb(85, 0, 255);\n"
"font: 900 italic 20pt \"Segoe UI\";\n"
"border: 0px solid black"));
        pushButton_24 = new QPushButton(verticalWidget_3);
        pushButton_24->setObjectName("pushButton_24");
        pushButton_24->setGeometry(QRect(50, 80, 221, 41));
        pushButton_24->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 58, 71);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid black\n"
""));
        pushButton_25 = new QPushButton(verticalWidget_3);
        pushButton_25->setObjectName("pushButton_25");
        pushButton_25->setGeometry(QRect(50, 140, 261, 41));
        pushButton_25->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 170, 31);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid black\n"
""));
        pushButton_26 = new QPushButton(verticalWidget_3);
        pushButton_26->setObjectName("pushButton_26");
        pushButton_26->setGeometry(QRect(50, 210, 261, 41));
        pushButton_26->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid black"));
        pushButton_27 = new QPushButton(verticalWidget_3);
        pushButton_27->setObjectName("pushButton_27");
        pushButton_27->setGeometry(QRect(10, 270, 91, 41));
        pushButton_27->setStyleSheet(QString::fromUtf8("background-color: rgb(149, 149, 149);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";\n"
"border: 2px solid black\n"
""));
        stackedWidget->addWidget(RPG_Default_Style_Page);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " Enter your login :", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter your password:", nullptr));
        I->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        H->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        T->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        CAL->setText(QCoreApplication::translate("MainWindow", "CAL", nullptr));
        KRIT->setText(QCoreApplication::translate("MainWindow", "KRIT", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Log Off", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "New Template  +", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Load Template", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Test mode", nullptr));
        label_Picture2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        I_2->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        KRIT_2->setText(QCoreApplication::translate("MainWindow", "KRIT", nullptr));
        CAL_2->setText(QCoreApplication::translate("MainWindow", "CAL", nullptr));
        T_2->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        H_2->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        textBrowser_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt; font-weight:700; color:#ffff00; vertical-align:super;\">H</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt; font-weight:700; color:#00aa00; vertical-align:super;\">KRITICAL</span></p>\n"
"<p align=\"center\" style=\" margi"
                        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt; font-weight:700; color:#ffff00; vertical-align:super;\">     T</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:48pt; font-weight:700; color:#ffff00; vertical-align:super;\"><br /></p></body></html>", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "New Template  +", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "Load Template", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "Test mode", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "Log Off", nullptr));
        toolButton_7->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Choose a template", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Template", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Name: </span><span style=\" font-size:11pt; color:#000000;\">RPG Test n\302\260 1<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Date of Creation: </span><span style=\" font-size:11pt; color:#000000;\">10/22/2024<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Date of Update: </s"
                        "pan><span style=\" font-size:11pt; color:#000000;\">10/22/2024<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">RPG Style:</span><span style=\" font-size:11pt; color:#000000;\"> Default</span></p></body></html>", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Template", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Template", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Name: </span><span style=\" font-size:11pt; color:#000000;\">RPG Test n\302\260 2<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Date of Creation: </span><span style=\" font-size:11pt; color:#000000;\">10/22/2024<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Date of Update: </s"
                        "pan><span style=\" font-size:11pt; color:#000000;\">10/22/2024<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">RPG Style:</span><span style=\" font-size:11pt; color:#000000;\"> Default</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Name: </span><span style=\" font-size:11pt; color:#000000;\">RPG Test n\302\260 3<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Date of Creation: </span><span style=\" font-size:11pt; color:#000000;\">10/22/2024<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Date of Update: </s"
                        "pan><span style=\" font-size:11pt; color:#000000;\">10/22/2024<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">RPG Style:</span><span style=\" font-size:11pt; color:#000000;\"> Default</span></p></body></html>", nullptr));
        label_Picture->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "RULES", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "CHARACTERS", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "STATS", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "SKILLS", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "STATUSES", nullptr));
        pushButton_28->setText(QCoreApplication::translate("MainWindow", "New  +", nullptr));
        pushButton_29->setText(QCoreApplication::translate("MainWindow", "Load +", nullptr));
        pushButton_30->setText(QCoreApplication::translate("MainWindow", "Save ", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "Log Off", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "Test Battle System", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "Reset the template", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "RPG Test n\302\260 1", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Rules Menu", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "In development...", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "In development...", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Characters Menu", nullptr));
        pushButton_31->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "In development", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Stats Menu", nullptr));
        pushButton_33->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Skills Menu", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "In development", nullptr));
        pushButton_32->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Skills Menu", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "In development", nullptr));
        pushButton_34->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        pushButton_59->setText(QCoreApplication::translate("MainWindow", "RULES", nullptr));
        pushButton_60->setText(QCoreApplication::translate("MainWindow", "Save ", nullptr));
        pushButton_61->setText(QCoreApplication::translate("MainWindow", "SKILLS", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "RPG Test n\302\260 1", nullptr));
        pushButton_62->setText(QCoreApplication::translate("MainWindow", "CHARACTERS", nullptr));
        pushButton_63->setText(QCoreApplication::translate("MainWindow", "STATUSES", nullptr));
        pushButton_64->setText(QCoreApplication::translate("MainWindow", "New  +", nullptr));
        pushButton_65->setText(QCoreApplication::translate("MainWindow", "Log Off", nullptr));
        label_Picture_3->setText(QString());
        pushButton_66->setText(QCoreApplication::translate("MainWindow", "Load +", nullptr));
        pushButton_67->setText(QCoreApplication::translate("MainWindow", "Reset the template", nullptr));
        pushButton_68->setText(QCoreApplication::translate("MainWindow", "STATS", nullptr));
        pushButton_69->setText(QCoreApplication::translate("MainWindow", "Test Battle System", nullptr));
        toolButton_12->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Choose a template", nullptr));
        pushButton_70->setText(QCoreApplication::translate("MainWindow", "Template", nullptr));
        textEdit_7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Name: </span><span style=\" font-size:11pt; color:#000000;\">RPG Test n\302\260 1<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Date of Creation: </span><span style=\" font-size:11pt; color:#000000;\">10/22/2024<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Date of Update: </s"
                        "pan><span style=\" font-size:11pt; color:#000000;\">10/22/2024<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">RPG Style:</span><span style=\" font-size:11pt; color:#000000;\"> Default</span></p></body></html>", nullptr));
        pushButton_71->setText(QCoreApplication::translate("MainWindow", "Template", nullptr));
        pushButton_72->setText(QCoreApplication::translate("MainWindow", "Template", nullptr));
        textEdit_8->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Name: </span><span style=\" font-size:11pt; color:#000000;\">RPG Test n\302\260 2<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Date of Creation: </span><span style=\" font-size:11pt; color:#000000;\">10/22/2024<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Date of Update: </s"
                        "pan><span style=\" font-size:11pt; color:#000000;\">10/22/2024<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">RPG Style:</span><span style=\" font-size:11pt; color:#000000;\"> Default</span></p></body></html>", nullptr));
        textEdit_9->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Name: </span><span style=\" font-size:11pt; color:#000000;\">RPG Test n\302\260 3<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Date of Creation: </span><span style=\" font-size:11pt; color:#000000;\">10/22/2024<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Date of Update: </s"
                        "pan><span style=\" font-size:11pt; color:#000000;\">10/22/2024<br /></span><span style=\" font-size:11pt; font-weight:700; color:#000000;\">RPG Style:</span><span style=\" font-size:11pt; color:#000000;\"> Default</span></p></body></html>", nullptr));
        toolButton_6->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Choose your RPG Style", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Default Style", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Custom Style", nullptr));
        toolButton_10->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Which default style ?", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "Pokemon RPG style", nullptr));
        pushButton_25->setText(QCoreApplication::translate("MainWindow", "Dragon Quest RPG Style", nullptr));
        pushButton_26->setText(QCoreApplication::translate("MainWindow", "Final Fantasy RPG Style", nullptr));
        pushButton_27->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
