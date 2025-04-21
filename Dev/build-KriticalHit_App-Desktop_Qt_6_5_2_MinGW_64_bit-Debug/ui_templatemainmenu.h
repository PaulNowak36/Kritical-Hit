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
    QLabel *templateName_Label1;
    QPushButton *logOut_Button2;
    QPushButton *newTemplate_Button2;
    QPushButton *loadTemplate_Button2;
    QPushButton *saveTemplate_Button;
    QPushButton *simulation_Button;
    QPushButton *rules_Button;
    QWidget *page_2;

    void setupUi(QWidget *TemplateMainMenu)
    {
        if (TemplateMainMenu->objectName().isEmpty())
            TemplateMainMenu->setObjectName("TemplateMainMenu");
        TemplateMainMenu->resize(800, 480);
        stackedWidget3 = new QStackedWidget(TemplateMainMenu);
        stackedWidget3->setObjectName("stackedWidget3");
        stackedWidget3->setGeometry(QRect(0, 0, 801, 491));
        templatePokemon_page = new QWidget();
        templatePokemon_page->setObjectName("templatePokemon_page");
        templateName_Label1 = new QLabel(templatePokemon_page);
        templateName_Label1->setObjectName("templateName_Label1");
        templateName_Label1->setGeometry(QRect(260, 20, 261, 41));
        templateName_Label1->setStyleSheet(QString::fromUtf8("font: 900 30pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        logOut_Button2 = new QPushButton(templatePokemon_page);
        logOut_Button2->setObjectName("logOut_Button2");
        logOut_Button2->setGeometry(QRect(650, 10, 121, 51));
        newTemplate_Button2 = new QPushButton(templatePokemon_page);
        newTemplate_Button2->setObjectName("newTemplate_Button2");
        newTemplate_Button2->setGeometry(QRect(10, 10, 91, 81));
        loadTemplate_Button2 = new QPushButton(templatePokemon_page);
        loadTemplate_Button2->setObjectName("loadTemplate_Button2");
        loadTemplate_Button2->setGeometry(QRect(10, 110, 91, 81));
        saveTemplate_Button = new QPushButton(templatePokemon_page);
        saveTemplate_Button->setObjectName("saveTemplate_Button");
        saveTemplate_Button->setGeometry(QRect(10, 210, 91, 81));
        simulation_Button = new QPushButton(templatePokemon_page);
        simulation_Button->setObjectName("simulation_Button");
        simulation_Button->setGeometry(QRect(450, 170, 121, 51));
        rules_Button = new QPushButton(templatePokemon_page);
        rules_Button->setObjectName("rules_Button");
        rules_Button->setGeometry(QRect(180, 100, 121, 51));
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
        templateName_Label1->setText(QCoreApplication::translate("TemplateMainMenu", "Pokemon Template", nullptr));
        logOut_Button2->setText(QCoreApplication::translate("TemplateMainMenu", "LOG OUT", nullptr));
        newTemplate_Button2->setText(QCoreApplication::translate("TemplateMainMenu", "New +", nullptr));
        loadTemplate_Button2->setText(QCoreApplication::translate("TemplateMainMenu", "Load +", nullptr));
        saveTemplate_Button->setText(QCoreApplication::translate("TemplateMainMenu", "Save", nullptr));
        simulation_Button->setText(QCoreApplication::translate("TemplateMainMenu", "Test Battle Template", nullptr));
        rules_Button->setText(QCoreApplication::translate("TemplateMainMenu", "RULES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TemplateMainMenu: public Ui_TemplateMainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATEMAINMENU_H
