/********************************************************************************
** Form generated from reading UI file 'templatemainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATEMAINMENU_H
#define UI_TEMPLATEMAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TemplateMainMenu
{
public:
    QStackedWidget *stackedWidget3;
    QWidget *templatePokemon_page;
    QPushButton *logOut_Button2;
    QPushButton *simulation_Button;
    QPushButton *rules_Button;
    QLabel *vs_Label;
    QLabel *templateMenu_Label;
    QWidget *page_2;

    void setupUi(QWidget *TemplateMainMenu)
    {
        if (TemplateMainMenu->objectName().isEmpty())
            TemplateMainMenu->setObjectName("TemplateMainMenu");
        TemplateMainMenu->resize(800, 480);
        stackedWidget3 = new QStackedWidget(TemplateMainMenu);
        stackedWidget3->setObjectName("stackedWidget3");
        stackedWidget3->setGeometry(QRect(0, 0, 801, 491));
        stackedWidget3->setStyleSheet(QString::fromUtf8("QPushButton.templateButton {\n"
"    font-family: \"Press Start 2P\";\n"
"    font-size: 10px;\n"
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
"QPushButton#logOut_Button2 {\n"
"	background-color: rgb(148, 148, 148);\n"
"}\n"
"\n"
"QPushButton#rules_Button {\n"
"	 background-color: rgb(85, 85, 255);\n"
"}\n"
"\n"
"QPushButton#simulation_Button {\n"
"	background-color: rgb(255, 85, 0);\n"
"}\n"
"\n"
"QLabel {\n"
"	font: 16pt \"Press Start 2P\";\n"
"}\n"
""));
        templatePokemon_page = new QWidget();
        templatePokemon_page->setObjectName("templatePokemon_page");
        logOut_Button2 = new QPushButton(templatePokemon_page);
        logOut_Button2->setObjectName("logOut_Button2");
        logOut_Button2->setGeometry(QRect(620, 40, 121, 51));
        simulation_Button = new QPushButton(templatePokemon_page);
        simulation_Button->setObjectName("simulation_Button");
        simulation_Button->setGeometry(QRect(260, 340, 301, 51));
        rules_Button = new QPushButton(templatePokemon_page);
        rules_Button->setObjectName("rules_Button");
        rules_Button->setGeometry(QRect(120, 120, 121, 51));
        vs_Label = new QLabel(templatePokemon_page);
        vs_Label->setObjectName("vs_Label");
        vs_Label->setGeometry(QRect(370, 170, 71, 131));
        templateMenu_Label = new QLabel(templatePokemon_page);
        templateMenu_Label->setObjectName("templateMenu_Label");
        templateMenu_Label->setGeometry(QRect(310, 20, 211, 51));
        stackedWidget3->addWidget(templatePokemon_page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget3->addWidget(page_2);

        retranslateUi(TemplateMainMenu);

        QMetaObject::connectSlotsByName(TemplateMainMenu);
    } // setupUi

    void retranslateUi(QWidget *TemplateMainMenu)
    {
        TemplateMainMenu->setWindowTitle(QCoreApplication::translate("TemplateMainMenu", "Form", nullptr));
        logOut_Button2->setText(QCoreApplication::translate("TemplateMainMenu", "LOG OUT", nullptr));
        simulation_Button->setText(QCoreApplication::translate("TemplateMainMenu", "SIMULATE BATTLE", nullptr));
        rules_Button->setText(QCoreApplication::translate("TemplateMainMenu", "RULES", nullptr));
        vs_Label->setText(QCoreApplication::translate("TemplateMainMenu", "TextLabel", nullptr));
        templateMenu_Label->setText(QCoreApplication::translate("TemplateMainMenu", "TEMPLATE MENU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TemplateMainMenu: public Ui_TemplateMainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATEMAINMENU_H
