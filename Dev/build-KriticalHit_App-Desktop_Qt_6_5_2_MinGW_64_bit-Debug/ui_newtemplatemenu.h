/********************************************************************************
** Form generated from reading UI file 'newtemplatemenu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTEMPLATEMENU_H
#define UI_NEWTEMPLATEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newTemplateMenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *RPG_Style_page;
    QWidget *verticalWidget;
    QToolButton *quit_Button;
    QLabel *chooseStyle_label;
    QPushButton *defaultStyle_Button;
    QPushButton *customStyle_Button;
    QWidget *Default_Style_page;
    QWidget *verticalWidget_2;
    QToolButton *quit_Button_2;
    QLabel *defaultStyle_Label;
    QPushButton *pokemon_Button;
    QPushButton *DGQ_Button;
    QPushButton *FF_Button;
    QPushButton *return_Button;

    void setupUi(QWidget *newTemplateMenu)
    {
        if (newTemplateMenu->objectName().isEmpty())
            newTemplateMenu->setObjectName("newTemplateMenu");
        newTemplateMenu->resize(800, 480);
        newTemplateMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget = new QStackedWidget(newTemplateMenu);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 801, 481));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget#verticalWidget, QWidget#verticalWidget_2 {\n"
"	background-color: orange;\n"
"	border: 2px solid #000000;\n"
"    border-radius: 10px;\n"
"\n"
"}\n"
"\n"
"QLabel{\n"
"	background: transparent;\n"
"	color: black;\n"
"	font: 15pt \"Segoe UI\";\n"
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
"QPushButton#defaultStyle_Button {\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QPushButton#customStyle_Button {\n"
"	background-color: rgb(255, 85, 127);\n"
"}\n"
"\n"
"QPushButton#pokemon_Button {\n"
"	background-color: rgb(255, 0, 0);\n"
"}\n"
"\n"
"QPushButton#DGQ_Button {\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QPushButto"
                        "n#FF_Button {	\n"
"	background-color: rgb(0, 170, 0);\n"
"}\n"
"\n"
"QPushButton#return_Button {	\n"
"	background-color: rgb(140, 140, 140);\n"
"}\n"
""));
        RPG_Style_page = new QWidget();
        RPG_Style_page->setObjectName("RPG_Style_page");
        RPG_Style_page->setStyleSheet(QString::fromUtf8(""));
        verticalWidget = new QWidget(RPG_Style_page);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setGeometry(QRect(200, 100, 447, 271));
        verticalWidget->setStyleSheet(QString::fromUtf8(""));
        quit_Button = new QToolButton(verticalWidget);
        quit_Button->setObjectName("quit_Button");
        quit_Button->setGeometry(QRect(360, 10, 80, 35));
        quit_Button->setMinimumSize(QSize(80, 24));
        quit_Button->setMaximumSize(QSize(80, 16777215));
        quit_Button->setStyleSheet(QString::fromUtf8(""));
        chooseStyle_label = new QLabel(verticalWidget);
        chooseStyle_label->setObjectName("chooseStyle_label");
        chooseStyle_label->setGeometry(QRect(120, 30, 298, 36));
        chooseStyle_label->setStyleSheet(QString::fromUtf8(""));
        defaultStyle_Button = new QPushButton(verticalWidget);
        defaultStyle_Button->setObjectName("defaultStyle_Button");
        defaultStyle_Button->setGeometry(QRect(50, 100, 142, 81));
        defaultStyle_Button->setStyleSheet(QString::fromUtf8(""));
        customStyle_Button = new QPushButton(verticalWidget);
        customStyle_Button->setObjectName("customStyle_Button");
        customStyle_Button->setGeometry(QRect(240, 100, 142, 81));
        customStyle_Button->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(RPG_Style_page);
        Default_Style_page = new QWidget();
        Default_Style_page->setObjectName("Default_Style_page");
        verticalWidget_2 = new QWidget(Default_Style_page);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setGeometry(QRect(170, 90, 447, 321));
        verticalWidget_2->setStyleSheet(QString::fromUtf8(""));
        quit_Button_2 = new QToolButton(verticalWidget_2);
        quit_Button_2->setObjectName("quit_Button_2");
        quit_Button_2->setGeometry(QRect(360, 10, 80, 35));
        quit_Button_2->setMinimumSize(QSize(80, 24));
        quit_Button_2->setMaximumSize(QSize(80, 16777215));
        defaultStyle_Label = new QLabel(verticalWidget_2);
        defaultStyle_Label->setObjectName("defaultStyle_Label");
        defaultStyle_Label->setGeometry(QRect(50, 20, 298, 36));
        pokemon_Button = new QPushButton(verticalWidget_2);
        pokemon_Button->setObjectName("pokemon_Button");
        pokemon_Button->setGeometry(QRect(50, 80, 221, 41));
        DGQ_Button = new QPushButton(verticalWidget_2);
        DGQ_Button->setObjectName("DGQ_Button");
        DGQ_Button->setGeometry(QRect(50, 140, 261, 41));
        FF_Button = new QPushButton(verticalWidget_2);
        FF_Button->setObjectName("FF_Button");
        FF_Button->setGeometry(QRect(50, 210, 261, 41));
        return_Button = new QPushButton(verticalWidget_2);
        return_Button->setObjectName("return_Button");
        return_Button->setGeometry(QRect(10, 270, 91, 41));
        stackedWidget->addWidget(Default_Style_page);

        retranslateUi(newTemplateMenu);

        QMetaObject::connectSlotsByName(newTemplateMenu);
    } // setupUi

    void retranslateUi(QWidget *newTemplateMenu)
    {
        newTemplateMenu->setWindowTitle(QCoreApplication::translate("newTemplateMenu", "Form", nullptr));
        quit_Button->setText(QCoreApplication::translate("newTemplateMenu", "X", nullptr));
        chooseStyle_label->setText(QCoreApplication::translate("newTemplateMenu", "Choose your RPG Style", nullptr));
        defaultStyle_Button->setText(QCoreApplication::translate("newTemplateMenu", "Default Style", nullptr));
        customStyle_Button->setText(QCoreApplication::translate("newTemplateMenu", "Custom Style", nullptr));
        quit_Button_2->setText(QCoreApplication::translate("newTemplateMenu", "X", nullptr));
        defaultStyle_Label->setText(QCoreApplication::translate("newTemplateMenu", "Which default style ?", nullptr));
        pokemon_Button->setText(QCoreApplication::translate("newTemplateMenu", "Pokemon RPG style", nullptr));
        DGQ_Button->setText(QCoreApplication::translate("newTemplateMenu", "Dragon Quest RPG Style", nullptr));
        FF_Button->setText(QCoreApplication::translate("newTemplateMenu", "Final Fantasy RPG Style", nullptr));
        return_Button->setText(QCoreApplication::translate("newTemplateMenu", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newTemplateMenu: public Ui_newTemplateMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTEMPLATEMENU_H
