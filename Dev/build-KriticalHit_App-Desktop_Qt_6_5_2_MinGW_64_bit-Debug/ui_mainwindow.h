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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

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
        page = new QWidget();
        page->setObjectName("page");
        page->setStyleSheet(QString::fromUtf8("#widget {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QLabel {\n"
"	color: #767e89;\n"
"}\n"
"\n"
"QLabel#label {\n"
"	color: #000;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border: none;\n"
"	border-bottom: 2px solid #cccccc;\n"
"}\n"
"\n"
"QLineEdit#focus {\n"
"	border-bottom: 2px solid #28a2a2;\n"
"}\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(85, 255, 127);\n"
"	border: 2px solid #fff;\n"
"	color: #fff;\n"
"	border-radius: 5px;\n"
"	padding: 6px;\n"
"}"));
        widget = new QWidget(page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(200, 90, 381, 285));
        widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("horizontalAlignment: AlignHCenter;\n"
"color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(15);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(250, 0));
        QFont font2;
        font2.setPointSize(13);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(lineEdit);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(lineEdit_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QFont font3;
        font3.setPointSize(12);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(45, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
