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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *characterEdit;
    QLabel *Character;
    QLabel *ATT;
    QLabel *DEF;
    QLabel *SPE;
    QLabel *HP;
    QTextEdit *att_Edit;
    QTextEdit *def_Edit;
    QTextEdit *spe_Edit;
    QTextEdit *hp_Edit;
    QLabel *Element;
    QTextEdit *elementEdit;
    QLabel *Skills;
    QTextEdit *skill_Edit;
    QTextEdit *skill_Edit_2;
    QTextEdit *skill_Edit_3;
    QLabel *spec_Ability;
    QTextEdit *specialAbility_Edit;
    QPushButton *Get_Button;
    QPushButton *Insert_Button;
    QPushButton *Update_Button;
    QPushButton *Get_Button_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        characterEdit = new QTextEdit(centralwidget);
        characterEdit->setObjectName("characterEdit");
        characterEdit->setGeometry(QRect(260, 100, 211, 31));
        Character = new QLabel(centralwidget);
        Character->setObjectName("Character");
        Character->setGeometry(QRect(290, 50, 151, 41));
        Character->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border: 2px solid black;"));
        ATT = new QLabel(centralwidget);
        ATT->setObjectName("ATT");
        ATT->setGeometry(QRect(20, 160, 71, 41));
        ATT->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border: 2px solid black;"));
        DEF = new QLabel(centralwidget);
        DEF->setObjectName("DEF");
        DEF->setGeometry(QRect(210, 160, 71, 41));
        DEF->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border: 2px solid black;"));
        SPE = new QLabel(centralwidget);
        SPE->setObjectName("SPE");
        SPE->setGeometry(QRect(380, 160, 71, 41));
        SPE->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border: 2px solid black;"));
        HP = new QLabel(centralwidget);
        HP->setObjectName("HP");
        HP->setGeometry(QRect(560, 160, 51, 41));
        HP->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border: 2px solid black;"));
        att_Edit = new QTextEdit(centralwidget);
        att_Edit->setObjectName("att_Edit");
        att_Edit->setGeometry(QRect(100, 170, 71, 31));
        def_Edit = new QTextEdit(centralwidget);
        def_Edit->setObjectName("def_Edit");
        def_Edit->setGeometry(QRect(290, 170, 71, 31));
        spe_Edit = new QTextEdit(centralwidget);
        spe_Edit->setObjectName("spe_Edit");
        spe_Edit->setGeometry(QRect(470, 170, 71, 31));
        hp_Edit = new QTextEdit(centralwidget);
        hp_Edit->setObjectName("hp_Edit");
        hp_Edit->setGeometry(QRect(620, 170, 71, 31));
        Element = new QLabel(centralwidget);
        Element->setObjectName("Element");
        Element->setGeometry(QRect(20, 240, 151, 41));
        Element->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border: 2px solid black;"));
        elementEdit = new QTextEdit(centralwidget);
        elementEdit->setObjectName("elementEdit");
        elementEdit->setGeometry(QRect(190, 250, 151, 31));
        Skills = new QLabel(centralwidget);
        Skills->setObjectName("Skills");
        Skills->setGeometry(QRect(40, 360, 111, 41));
        Skills->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border: 2px solid black;"));
        skill_Edit = new QTextEdit(centralwidget);
        skill_Edit->setObjectName("skill_Edit");
        skill_Edit->setGeometry(QRect(160, 330, 151, 31));
        skill_Edit_2 = new QTextEdit(centralwidget);
        skill_Edit_2->setObjectName("skill_Edit_2");
        skill_Edit_2->setGeometry(QRect(160, 380, 151, 31));
        skill_Edit_3 = new QTextEdit(centralwidget);
        skill_Edit_3->setObjectName("skill_Edit_3");
        skill_Edit_3->setGeometry(QRect(160, 430, 151, 31));
        spec_Ability = new QLabel(centralwidget);
        spec_Ability->setObjectName("spec_Ability");
        spec_Ability->setGeometry(QRect(380, 240, 301, 41));
        spec_Ability->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border: 2px solid black;"));
        specialAbility_Edit = new QTextEdit(centralwidget);
        specialAbility_Edit->setObjectName("specialAbility_Edit");
        specialAbility_Edit->setGeometry(QRect(380, 300, 291, 41));
        Get_Button = new QPushButton(centralwidget);
        Get_Button->setObjectName("Get_Button");
        Get_Button->setGeometry(QRect(470, 20, 71, 41));
        Get_Button->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 127);"));
        Insert_Button = new QPushButton(centralwidget);
        Insert_Button->setObjectName("Insert_Button");
        Insert_Button->setGeometry(QRect(180, 20, 71, 41));
        Insert_Button->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 255);"));
        Update_Button = new QPushButton(centralwidget);
        Update_Button->setObjectName("Update_Button");
        Update_Button->setGeometry(QRect(170, 90, 71, 41));
        Update_Button->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 127);"));
        Get_Button_2 = new QPushButton(centralwidget);
        Get_Button_2->setObjectName("Get_Button_2");
        Get_Button_2->setGeometry(QRect(490, 90, 71, 41));
        Get_Button_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);"));
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
        Character->setText(QCoreApplication::translate("MainWindow", "Character", nullptr));
        ATT->setText(QCoreApplication::translate("MainWindow", "ATT", nullptr));
        DEF->setText(QCoreApplication::translate("MainWindow", "DEF", nullptr));
        SPE->setText(QCoreApplication::translate("MainWindow", "SPE", nullptr));
        HP->setText(QCoreApplication::translate("MainWindow", "HP", nullptr));
        Element->setText(QCoreApplication::translate("MainWindow", "ELEMENT", nullptr));
        Skills->setText(QCoreApplication::translate("MainWindow", "SKILLS", nullptr));
        spec_Ability->setText(QCoreApplication::translate("MainWindow", "SPECIAL ABILITY", nullptr));
        Get_Button->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        Insert_Button->setText(QCoreApplication::translate("MainWindow", "Insert", nullptr));
        Update_Button->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        Get_Button_2->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
