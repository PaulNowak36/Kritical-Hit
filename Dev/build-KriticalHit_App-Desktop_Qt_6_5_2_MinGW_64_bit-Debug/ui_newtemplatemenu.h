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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newTemplateMenu
{
public:
    QStackedWidget *stackedWidget2;
    QWidget *RPG_Style_page;
    QWidget *verticalWidget;
    QLabel *chooseStyle_label;
    QPushButton *defaultStyle_Button;
    QPushButton *customStyle_Button;
    QPushButton *quit_Button;
    QWidget *Default_Style_page;
    QWidget *verticalWidget_2;
    QPushButton *quit_Button_2;
    QLabel *defaultStyle_Label;
    QPushButton *pokemon_Button;
    QPushButton *DGQ_Button;
    QPushButton *FF_Button;
    QPushButton *return_Button;
    QWidget *Custom_Style_page;
    QWidget *verticalWidget_3;
    QPushButton *quit_Button_3;
    QLabel *customStyle_Label;
    QWidget *TurnBasedRPG_Widget_2;
    QVBoxLayout *TurnBasedRPG_Widget;
    QPushButton *TurnBasedRPG_Button;
    QLabel *TurnBasedRPG_Definition;
    QPushButton *return_Button_2;
    QWidget *ActiveTimeRPG_Widget_2;
    QVBoxLayout *ActiveTimeRPG_Widget;
    QPushButton *ActiveTimeRPG_Button;
    QLabel *ActiveTimeRPG_Definition;
    QWidget *Turn_Based_page;
    QWidget *verticalWidget_4;
    QPushButton *quit_Button_4;
    QLabel *TurnBased_Label;
    QWidget *ActiveMode_Widget;
    QVBoxLayout *TurnBasedRPG_Widget_4;
    QPushButton *ActiveMode_Button;
    QLabel *ActiveMode_Definition;
    QPushButton *return_Button_3;
    QWidget *ClassicMode_Widget;
    QVBoxLayout *TurnBasedRPG_Widget_5;
    QPushButton *ClassicMode_Button;
    QLabel *ClassicMode_Definition;
    QWidget *MultiTurnMode_Widget;
    QVBoxLayout *TurnBasedRPG_Widget_6;
    QPushButton *MultiTurnMode_Button;
    QLabel *MultiTurnMode_Definition;

    void setupUi(QWidget *newTemplateMenu)
    {
        if (newTemplateMenu->objectName().isEmpty())
            newTemplateMenu->setObjectName("newTemplateMenu");
        newTemplateMenu->resize(800, 480);
        newTemplateMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget2 = new QStackedWidget(newTemplateMenu);
        stackedWidget2->setObjectName("stackedWidget2");
        stackedWidget2->setGeometry(QRect(0, 0, 801, 481));
        stackedWidget2->setStyleSheet(QString::fromUtf8("QWidget#verticalWidget, QWidget#verticalWidget_2, QWidget#verticalWidget_3, QWidget#verticalWidget_4 {\n"
"	background-color: orange;\n"
"	border: 2px solid #000000;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QWidget#TurnBasedRPG_Widget_2 {\n"
"	background-color: rgb(0, 170, 0);\n"
"	border: 2px solid #000000;\n"
"    border-radius: 10px;\n"
"	min-width: 350px;\n"
"    max-width: 350px;\n"
"	min-height: 110px;\n"
"	max-height: 110px;\n"
"}\n"
"\n"
"QWidget#ActiveTimeRPG_Widget_2 {\n"
"	background-color: rgb(85, 85, 255);\n"
"	border: 2px solid #000000;\n"
"    border-radius: 10px;\n"
"	min-width: 350px;\n"
"    max-width: 350px;\n"
"	min-height: 110px;\n"
"	max-height: 110px;\n"
"}\n"
"\n"
"QWidget#ActiveMode_Widget {\n"
"	background-color: rgb(0, 0, 127);\n"
"	border: 2px solid #000000;\n"
"    border-radius: 10px;\n"
"	min-width: 150px;\n"
"    max-width: 150px;\n"
"	min-height:120px;\n"
"	max-height: 120px;\n"
"}\n"
"\n"
"QWidget#ClassicMode_Widget {\n"
"	\n"
"	background-color: rgb(255, 0, 0);\n"
"	border"
                        ": 2px solid #000000;\n"
"    border-radius: 10px;\n"
"	min-width: 150px;\n"
"    max-width: 150px;\n"
"	min-height:120px;\n"
"	max-height: 120px;\n"
"}\n"
"\n"
"QWidget#MultiTurnMode_Widget {\n"
"	background-color: rgb(0, 170, 0);\n"
"	border: 2px solid #000000;\n"
"    border-radius: 10px;\n"
"	min-width: 150px;\n"
"    max-width: 150px;\n"
"	min-height:120px;\n"
"	max-height: 120px;\n"
"}\n"
"\n"
"QLabel{\n"
"	background: transparent;\n"
"	color: black;\n"
"	font: 15pt \"Segoe UI\";\n"
"}\n"
"\n"
"QLabel.labelDefinition{\n"
"	background: transparent;\n"
"	font: 12pt \"Segoe UI\";\n"
"	text-align: center;\n"
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
""
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
"QPushButton#quit_Button, QPushButton#quit_Button_2, QPushButton#quit_Button_3, QPushButton#quit_Button_4 {\n"
"    background-color: rgb(255, 255, 255);\n"
"    min-width: 34px;\n"
"    max-width: 34px;\n"
"    min-height: 34px;  /* Ensure a clickable height */\n"
"    max-height: 34px;\n"
"	padding: 2px;\n"
"    qproperty-iconSize: 32px 32px;\n"
"}\n"
"\n"
"QPushButton#pokemon_Button {\n"
"	background-color: rgb(255, 0, 0);\n"
"	min-width: 280px;\n"
"    max-width: 280px;\n"
"}\n"
"\n"
"QPushButton#DGQ_Button {\n"
"	background-color: rgb(0, 0, 127);\n"
"	min-width: 300px;\n"
"    max-width: 300px;\n"
"}\n"
"\n"
"QPushButton#FF_Button {	\n"
"	background-color: rgb(0, 170, 0);\n"
"	min-width: 300px;\n"
"    max-width: 300px;\n"
"}\n"
"\n"
"QPushButton#TurnBasedRPG_Button {\n"
"	border: none;\n"
"	background-color: rgb(0, 170, "
                        "0);\n"
"	min-width: 320px;\n"
"    max-width: 320px;\n"
"}\n"
"\n"
"QPushButton#ActiveTimeRPG_Button {\n"
"	border: none;\n"
"	background-color: rgb(85, 85, 255);\n"
"	min-width: 320px;\n"
"    max-width: 320px;\n"
"}\n"
"\n"
"QPushButton#ActiveMode_Button {\n"
"	border: none;\n"
"	background-color: rgb(0, 0, 127);\n"
"	min-width: 120px;\n"
"    max-width: 120px;\n"
"}\n"
"\n"
"QPushButton#ClassicMode_Button {\n"
"	border: none;\n"
"	background-color: rgb(255, 0, 0);\n"
"	min-width: 120px;\n"
"    max-width: 120px;\n"
"}\n"
"\n"
"QPushButton#MultiTurnMode_Button {\n"
"	border: none;\n"
"	background-color: rgb(0, 170, 0);\n"
"	min-width: 120px;\n"
"    max-width: 120px;\n"
"}\n"
"\n"
"QPushButton#return_Button, QPushButton#return2_Button, QPushButton#return3_Button  {	\n"
"	background-color: rgb(140, 140, 140);\n"
"}\n"
"\n"
""));
        RPG_Style_page = new QWidget();
        RPG_Style_page->setObjectName("RPG_Style_page");
        RPG_Style_page->setStyleSheet(QString::fromUtf8(""));
        verticalWidget = new QWidget(RPG_Style_page);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setGeometry(QRect(190, 40, 447, 271));
        verticalWidget->setStyleSheet(QString::fromUtf8(""));
        chooseStyle_label = new QLabel(verticalWidget);
        chooseStyle_label->setObjectName("chooseStyle_label");
        chooseStyle_label->setGeometry(QRect(130, 20, 201, 36));
        chooseStyle_label->setStyleSheet(QString::fromUtf8(""));
        defaultStyle_Button = new QPushButton(verticalWidget);
        defaultStyle_Button->setObjectName("defaultStyle_Button");
        defaultStyle_Button->setGeometry(QRect(50, 100, 142, 81));
        defaultStyle_Button->setStyleSheet(QString::fromUtf8(""));
        customStyle_Button = new QPushButton(verticalWidget);
        customStyle_Button->setObjectName("customStyle_Button");
        customStyle_Button->setGeometry(QRect(240, 100, 142, 81));
        customStyle_Button->setStyleSheet(QString::fromUtf8(""));
        quit_Button = new QPushButton(verticalWidget);
        quit_Button->setObjectName("quit_Button");
        quit_Button->setGeometry(QRect(390, 10, 40, 40));
        stackedWidget2->addWidget(RPG_Style_page);
        Default_Style_page = new QWidget();
        Default_Style_page->setObjectName("Default_Style_page");
        verticalWidget_2 = new QWidget(Default_Style_page);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setGeometry(QRect(170, 40, 447, 321));
        verticalWidget_2->setStyleSheet(QString::fromUtf8(""));
        quit_Button_2 = new QPushButton(verticalWidget_2);
        quit_Button_2->setObjectName("quit_Button_2");
        quit_Button_2->setGeometry(QRect(390, 10, 40, 40));
        quit_Button_2->setMinimumSize(QSize(40, 40));
        quit_Button_2->setMaximumSize(QSize(40, 40));
        defaultStyle_Label = new QLabel(verticalWidget_2);
        defaultStyle_Label->setObjectName("defaultStyle_Label");
        defaultStyle_Label->setGeometry(QRect(130, 20, 191, 36));
        pokemon_Button = new QPushButton(verticalWidget_2);
        pokemon_Button->setObjectName("pokemon_Button");
        pokemon_Button->setGeometry(QRect(80, 80, 282, 41));
        DGQ_Button = new QPushButton(verticalWidget_2);
        DGQ_Button->setObjectName("DGQ_Button");
        DGQ_Button->setGeometry(QRect(70, 140, 302, 41));
        FF_Button = new QPushButton(verticalWidget_2);
        FF_Button->setObjectName("FF_Button");
        FF_Button->setGeometry(QRect(70, 200, 302, 41));
        return_Button = new QPushButton(verticalWidget_2);
        return_Button->setObjectName("return_Button");
        return_Button->setGeometry(QRect(10, 270, 91, 41));
        stackedWidget2->addWidget(Default_Style_page);
        Custom_Style_page = new QWidget();
        Custom_Style_page->setObjectName("Custom_Style_page");
        verticalWidget_3 = new QWidget(Custom_Style_page);
        verticalWidget_3->setObjectName("verticalWidget_3");
        verticalWidget_3->setGeometry(QRect(150, 40, 501, 361));
        verticalWidget_3->setStyleSheet(QString::fromUtf8(""));
        quit_Button_3 = new QPushButton(verticalWidget_3);
        quit_Button_3->setObjectName("quit_Button_3");
        quit_Button_3->setGeometry(QRect(450, 10, 40, 40));
        quit_Button_3->setMinimumSize(QSize(40, 40));
        quit_Button_3->setMaximumSize(QSize(40, 40));
        quit_Button_3->setStyleSheet(QString::fromUtf8(""));
        customStyle_Label = new QLabel(verticalWidget_3);
        customStyle_Label->setObjectName("customStyle_Label");
        customStyle_Label->setGeometry(QRect(160, 10, 181, 36));
        customStyle_Label->setStyleSheet(QString::fromUtf8(""));
        TurnBasedRPG_Widget_2 = new QWidget(verticalWidget_3);
        TurnBasedRPG_Widget_2->setObjectName("TurnBasedRPG_Widget_2");
        TurnBasedRPG_Widget_2->setGeometry(QRect(90, 60, 354, 114));
        TurnBasedRPG_Widget = new QVBoxLayout(TurnBasedRPG_Widget_2);
        TurnBasedRPG_Widget->setObjectName("TurnBasedRPG_Widget");
        TurnBasedRPG_Button = new QPushButton(TurnBasedRPG_Widget_2);
        TurnBasedRPG_Button->setObjectName("TurnBasedRPG_Button");
        TurnBasedRPG_Button->setStyleSheet(QString::fromUtf8(""));

        TurnBasedRPG_Widget->addWidget(TurnBasedRPG_Button);

        TurnBasedRPG_Definition = new QLabel(TurnBasedRPG_Widget_2);
        TurnBasedRPG_Definition->setObjectName("TurnBasedRPG_Definition");
        TurnBasedRPG_Definition->setStyleSheet(QString::fromUtf8(""));

        TurnBasedRPG_Widget->addWidget(TurnBasedRPG_Definition);

        return_Button_2 = new QPushButton(verticalWidget_3);
        return_Button_2->setObjectName("return_Button_2");
        return_Button_2->setGeometry(QRect(10, 310, 91, 41));
        ActiveTimeRPG_Widget_2 = new QWidget(verticalWidget_3);
        ActiveTimeRPG_Widget_2->setObjectName("ActiveTimeRPG_Widget_2");
        ActiveTimeRPG_Widget_2->setGeometry(QRect(90, 190, 354, 114));
        ActiveTimeRPG_Widget = new QVBoxLayout(ActiveTimeRPG_Widget_2);
        ActiveTimeRPG_Widget->setObjectName("ActiveTimeRPG_Widget");
        ActiveTimeRPG_Button = new QPushButton(ActiveTimeRPG_Widget_2);
        ActiveTimeRPG_Button->setObjectName("ActiveTimeRPG_Button");
        ActiveTimeRPG_Button->setStyleSheet(QString::fromUtf8(""));

        ActiveTimeRPG_Widget->addWidget(ActiveTimeRPG_Button);

        ActiveTimeRPG_Definition = new QLabel(ActiveTimeRPG_Widget_2);
        ActiveTimeRPG_Definition->setObjectName("ActiveTimeRPG_Definition");
        ActiveTimeRPG_Definition->setStyleSheet(QString::fromUtf8(""));

        ActiveTimeRPG_Widget->addWidget(ActiveTimeRPG_Definition);

        stackedWidget2->addWidget(Custom_Style_page);
        Turn_Based_page = new QWidget();
        Turn_Based_page->setObjectName("Turn_Based_page");
        verticalWidget_4 = new QWidget(Turn_Based_page);
        verticalWidget_4->setObjectName("verticalWidget_4");
        verticalWidget_4->setGeometry(QRect(150, 40, 501, 361));
        verticalWidget_4->setStyleSheet(QString::fromUtf8(""));
        quit_Button_4 = new QPushButton(verticalWidget_4);
        quit_Button_4->setObjectName("quit_Button_4");
        quit_Button_4->setGeometry(QRect(450, 10, 40, 40));
        quit_Button_4->setMinimumSize(QSize(40, 40));
        quit_Button_4->setMaximumSize(QSize(40, 40));
        quit_Button_4->setStyleSheet(QString::fromUtf8(""));
        TurnBased_Label = new QLabel(verticalWidget_4);
        TurnBased_Label->setObjectName("TurnBased_Label");
        TurnBased_Label->setGeometry(QRect(130, 10, 281, 36));
        TurnBased_Label->setStyleSheet(QString::fromUtf8(""));
        ActiveMode_Widget = new QWidget(verticalWidget_4);
        ActiveMode_Widget->setObjectName("ActiveMode_Widget");
        ActiveMode_Widget->setGeometry(QRect(60, 60, 154, 124));
        TurnBasedRPG_Widget_4 = new QVBoxLayout(ActiveMode_Widget);
        TurnBasedRPG_Widget_4->setObjectName("TurnBasedRPG_Widget_4");
        ActiveMode_Button = new QPushButton(ActiveMode_Widget);
        ActiveMode_Button->setObjectName("ActiveMode_Button");
        ActiveMode_Button->setStyleSheet(QString::fromUtf8(""));

        TurnBasedRPG_Widget_4->addWidget(ActiveMode_Button);

        ActiveMode_Definition = new QLabel(ActiveMode_Widget);
        ActiveMode_Definition->setObjectName("ActiveMode_Definition");
        ActiveMode_Definition->setStyleSheet(QString::fromUtf8(""));

        TurnBasedRPG_Widget_4->addWidget(ActiveMode_Definition);

        return_Button_3 = new QPushButton(verticalWidget_4);
        return_Button_3->setObjectName("return_Button_3");
        return_Button_3->setGeometry(QRect(10, 310, 91, 41));
        ClassicMode_Widget = new QWidget(verticalWidget_4);
        ClassicMode_Widget->setObjectName("ClassicMode_Widget");
        ClassicMode_Widget->setGeometry(QRect(290, 60, 154, 124));
        TurnBasedRPG_Widget_5 = new QVBoxLayout(ClassicMode_Widget);
        TurnBasedRPG_Widget_5->setObjectName("TurnBasedRPG_Widget_5");
        ClassicMode_Button = new QPushButton(ClassicMode_Widget);
        ClassicMode_Button->setObjectName("ClassicMode_Button");
        ClassicMode_Button->setStyleSheet(QString::fromUtf8(""));

        TurnBasedRPG_Widget_5->addWidget(ClassicMode_Button);

        ClassicMode_Definition = new QLabel(ClassicMode_Widget);
        ClassicMode_Definition->setObjectName("ClassicMode_Definition");
        ClassicMode_Definition->setStyleSheet(QString::fromUtf8(""));

        TurnBasedRPG_Widget_5->addWidget(ClassicMode_Definition);

        MultiTurnMode_Widget = new QWidget(verticalWidget_4);
        MultiTurnMode_Widget->setObjectName("MultiTurnMode_Widget");
        MultiTurnMode_Widget->setGeometry(QRect(170, 200, 154, 124));
        TurnBasedRPG_Widget_6 = new QVBoxLayout(MultiTurnMode_Widget);
        TurnBasedRPG_Widget_6->setObjectName("TurnBasedRPG_Widget_6");
        MultiTurnMode_Button = new QPushButton(MultiTurnMode_Widget);
        MultiTurnMode_Button->setObjectName("MultiTurnMode_Button");
        MultiTurnMode_Button->setStyleSheet(QString::fromUtf8(""));

        TurnBasedRPG_Widget_6->addWidget(MultiTurnMode_Button);

        MultiTurnMode_Definition = new QLabel(MultiTurnMode_Widget);
        MultiTurnMode_Definition->setObjectName("MultiTurnMode_Definition");
        MultiTurnMode_Definition->setStyleSheet(QString::fromUtf8(""));

        TurnBasedRPG_Widget_6->addWidget(MultiTurnMode_Definition);

        stackedWidget2->addWidget(Turn_Based_page);

        retranslateUi(newTemplateMenu);

        stackedWidget2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(newTemplateMenu);
    } // setupUi

    void retranslateUi(QWidget *newTemplateMenu)
    {
        newTemplateMenu->setWindowTitle(QCoreApplication::translate("newTemplateMenu", "Form", nullptr));
        chooseStyle_label->setText(QCoreApplication::translate("newTemplateMenu", "Choose your RPG Style", nullptr));
        defaultStyle_Button->setText(QCoreApplication::translate("newTemplateMenu", "Default Style", nullptr));
        customStyle_Button->setText(QCoreApplication::translate("newTemplateMenu", "Custom Style", nullptr));
        quit_Button->setText(QString());
        quit_Button_2->setText(QString());
        defaultStyle_Label->setText(QCoreApplication::translate("newTemplateMenu", "Which default style ?", nullptr));
        pokemon_Button->setText(QCoreApplication::translate("newTemplateMenu", "Pokemon RPG style", nullptr));
        DGQ_Button->setText(QCoreApplication::translate("newTemplateMenu", "Dragon Quest RPG Style", nullptr));
        FF_Button->setText(QCoreApplication::translate("newTemplateMenu", "Final Fantasy RPG Style", nullptr));
        return_Button->setText(QCoreApplication::translate("newTemplateMenu", "Return", nullptr));
        quit_Button_3->setText(QString());
        customStyle_Label->setText(QCoreApplication::translate("newTemplateMenu", "Which Custom style ?", nullptr));
        TurnBasedRPG_Button->setText(QCoreApplication::translate("newTemplateMenu", "Turn Based RPG", nullptr));
        TurnBasedRPG_Definition->setText(QCoreApplication::translate("newTemplateMenu", "Each character attack turn by turn.", nullptr));
        return_Button_2->setText(QCoreApplication::translate("newTemplateMenu", "Return", nullptr));
        ActiveTimeRPG_Button->setText(QCoreApplication::translate("newTemplateMenu", "Active Time RPG", nullptr));
        ActiveTimeRPG_Definition->setText(QCoreApplication::translate("newTemplateMenu", "Each fighter can perform an action if their TimeBar is filled enough.", nullptr));
        quit_Button_4->setText(QString());
        TurnBased_Label->setText(QCoreApplication::translate("newTemplateMenu", "What kind of turn based RPG ?", nullptr));
        ActiveMode_Button->setText(QCoreApplication::translate("newTemplateMenu", "Active Mode", nullptr));
        ActiveMode_Definition->setText(QCoreApplication::translate("newTemplateMenu", "Each fighter select their action and perform it directly.", nullptr));
        return_Button_3->setText(QCoreApplication::translate("newTemplateMenu", "Return", nullptr));
        ClassicMode_Button->setText(QCoreApplication::translate("newTemplateMenu", "Classic Mode", nullptr));
        ClassicMode_Definition->setText(QCoreApplication::translate("newTemplateMenu", "Each fighter select their action and perform it directly.", nullptr));
        MultiTurnMode_Button->setText(QCoreApplication::translate("newTemplateMenu", "Multi-Turn Mode", nullptr));
        MultiTurnMode_Definition->setText(QCoreApplication::translate("newTemplateMenu", "All fighter has a \"Turn value\", and the one with the highest value starts.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newTemplateMenu: public Ui_newTemplateMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTEMPLATEMENU_H
