#pragma once
/********************************************************************************
** Form generated from reading UI file ''
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rulesMenu
{
public:
    QLabel *label;
    QCheckBox *healing_checkBox;
    QCheckBox *buffing_checkBox;
    QPushButton *Confirm_Button;
    QCheckBox *PP_checkBox;

    void setupUi(QWidget *rulesMenu)
    {
        if (rulesMenu->objectName().isEmpty())
            rulesMenu->setObjectName("rulesMenu");
        rulesMenu->resize(800, 480);
        label = new QLabel(rulesMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 10, 201, 71));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 700 24pt \"Segoe UI\";\n"
"\n"
"color: rgb(255, 0, 0);"));
        healing_checkBox = new QCheckBox(rulesMenu);
        healing_checkBox->setObjectName("healing_checkBox");
        healing_checkBox->setGeometry(QRect(230, 110, 281, 51));
        healing_checkBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        buffing_checkBox = new QCheckBox(rulesMenu);
        buffing_checkBox->setObjectName("buffing_checkBox");
        buffing_checkBox->setGeometry(QRect(230, 180, 281, 51));
        buffing_checkBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        Confirm_Button = new QPushButton(rulesMenu);
        Confirm_Button->setObjectName("Confirm_Button");
        Confirm_Button->setGeometry(QRect(590, 340, 111, 41));
        Confirm_Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(0, 255, 0);\n"
"font: 900 12pt \"Segoe UI\";"));
        PP_checkBox = new QCheckBox(rulesMenu);
        PP_checkBox->setObjectName("healing_checkBox_3");
        PP_checkBox->setGeometry(QRect(230, 240, 281, 51));
        PP_checkBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 14pt \"Segoe UI\";"));

        retranslateUi(rulesMenu);

        QMetaObject::connectSlotsByName(rulesMenu);
    } // setupUi

    void retranslateUi(QWidget *rulesMenu)
    {
        rulesMenu->setWindowTitle(QCoreApplication::translate("rulesMenu", "Form", nullptr));
        label->setText(QCoreApplication::translate("rulesMenu", "Rules MENU", nullptr));
        healing_checkBox->setText(QCoreApplication::translate("rulesMenu", "healing allowed", nullptr));
        buffing_checkBox->setText(QCoreApplication::translate("rulesMenu", "buffing allowed", nullptr));
        Confirm_Button->setText(QCoreApplication::translate("rulesMenu", "Confirm", nullptr));
        PP_checkBox->setText(QCoreApplication::translate("rulesMenu", "buffing allowed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rulesMenu: public Ui_rulesMenu {};
} // namespace Ui

QT_END_NAMESPACE

