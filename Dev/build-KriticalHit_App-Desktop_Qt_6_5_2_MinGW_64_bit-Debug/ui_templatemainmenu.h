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
    QLabel *setup_Label;
    QLabel *pokePicture1;
    QLabel *pokePicture2;
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
"    min-width: 90px;\n"
"    max-width: 90px;\n"
"}\n"
"\n"
"QPushButton:hover#logOut_Button2, QPushButton:clicked#logOut_Button2 {\n"
"	background-color: rgb(76, 76, 76);\n"
"}\n"
"\n"
"QPushButton#rules_Button {\n"
"	 background-color: rgb(85, 85, 255);	 \n"
"    min-width: 120px;\n"
"    max-width: 120px;\n"
"}\n"
"\n"
"QPushButton:hover#rules_Button, QPushButton:clicked#rules_Button {\n"
"	background-color: rgb(33, 33, 100);\n"
"}\n"
"\n"
"QPushButton#simulation_Button {\n"
"	background-color: rgb(255, 85, 0);\n"
"	min-width: 300px;\n"
""
                        "    max-width: 300px;\n"
"	font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover#simulation_Button, QPushButton:clicked#simulation_Button {\n"
"	background-color: rgb(179, 60, 0);\n"
"}\n"
"\n"
"\n"
"\n"
"QLabel#templateMenu_Label {\n"
"	font: 20pt \"Press Start 2P\";\n"
"}\n"
"\n"
"QLabel#setup_Label {\n"
"	color: rgb(255, 0, 0);\n"
"	font: 10pt \"Press Start 2P\";\n"
"}\n"
""));
        templatePokemon_page = new QWidget();
        templatePokemon_page->setObjectName("templatePokemon_page");
        logOut_Button2 = new QPushButton(templatePokemon_page);
        logOut_Button2->setObjectName("logOut_Button2");
        logOut_Button2->setGeometry(QRect(620, 10, 92, 51));
        simulation_Button = new QPushButton(templatePokemon_page);
        simulation_Button->setObjectName("simulation_Button");
        simulation_Button->setGeometry(QRect(250, 340, 302, 51));
        rules_Button = new QPushButton(templatePokemon_page);
        rules_Button->setObjectName("rules_Button");
        rules_Button->setGeometry(QRect(20, 140, 122, 51));
        vs_Label = new QLabel(templatePokemon_page);
        vs_Label->setObjectName("vs_Label");
        vs_Label->setGeometry(QRect(360, 160, 101, 161));
        templateMenu_Label = new QLabel(templatePokemon_page);
        templateMenu_Label->setObjectName("templateMenu_Label");
        templateMenu_Label->setGeometry(QRect(300, 10, 211, 71));
        templateMenu_Label->setAlignment(Qt::AlignCenter);
        setup_Label = new QLabel(templatePokemon_page);
        setup_Label->setObjectName("setup_Label");
        setup_Label->setGeometry(QRect(100, 80, 591, 51));
        setup_Label->setAlignment(Qt::AlignCenter);
        pokePicture1 = new QLabel(templatePokemon_page);
        pokePicture1->setObjectName("pokePicture1");
        pokePicture1->setGeometry(QRect(170, 180, 131, 131));
        pokePicture2 = new QLabel(templatePokemon_page);
        pokePicture2->setObjectName("pokePicture2");
        pokePicture2->setGeometry(QRect(510, 180, 131, 131));
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
        templateMenu_Label->setText(QCoreApplication::translate("TemplateMainMenu", "TEMPLATE\n"
"MENU", nullptr));
        setup_Label->setText(QCoreApplication::translate("TemplateMainMenu", "Set up and test your Pokemon\n"
"battle !", nullptr));
        pokePicture1->setText(QCoreApplication::translate("TemplateMainMenu", "TextLabel", nullptr));
        pokePicture2->setText(QCoreApplication::translate("TemplateMainMenu", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TemplateMainMenu: public Ui_TemplateMainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATEMAINMENU_H
