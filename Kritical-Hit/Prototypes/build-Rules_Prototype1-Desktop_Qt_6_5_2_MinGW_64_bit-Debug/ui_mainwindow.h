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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QPushButton *test_Button;
    QPushButton *rules_Button;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 480);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(9, 9, 800, 480));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 30, 241, 71));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 700 24pt \"Segoe UI\";\n"
"\n"
"color: rgb(255, 0, 0);"));
        test_Button = new QPushButton(page);
        test_Button->setObjectName("test_Button");
        test_Button->setGeometry(QRect(400, 140, 221, 91));
        test_Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(0, 255, 127);\n"
"font: 900 20pt \"Segoe UI\";"));
        rules_Button = new QPushButton(page);
        rules_Button->setObjectName("rules_Button");
        rules_Button->setGeometry(QRect(120, 140, 221, 91));
        rules_Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(255, 255, 127);\n"
"font: 900 20pt \"Segoe UI\";"));
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
        label->setText(QCoreApplication::translate("MainWindow", "Rules Prototype", nullptr));
        test_Button->setText(QCoreApplication::translate("MainWindow", "Go to TEST", nullptr));
        rules_Button->setText(QCoreApplication::translate("MainWindow", "Go to RULES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
