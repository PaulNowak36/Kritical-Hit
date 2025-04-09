/********************************************************************************
** Form generated from reading UI file 'rules.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULES_H
#define UI_RULES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rules
{
public:
    QLabel *label;
    QPushButton *Confirm_Button;
    QCheckBox *checkBox;

    void setupUi(QWidget *Rules)
    {
        if (Rules->objectName().isEmpty())
            Rules->setObjectName("Rules");
        Rules->resize(800, 480);
        Rules->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(Rules);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 30, 241, 71));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 700 24pt \"Segoe UI\";\n"
"\n"
"color: rgb(255, 0, 0);"));
        Confirm_Button = new QPushButton(Rules);
        Confirm_Button->setObjectName("Confirm_Button");
        Confirm_Button->setGeometry(QRect(290, 360, 171, 91));
        Confirm_Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(0, 255, 0);\n"
"font: 900 20pt \"Segoe UI\";"));
        checkBox = new QCheckBox(Rules);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(180, 200, 251, 51));
        checkBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 14pt \"Segoe UI\";"));

        retranslateUi(Rules);

        QMetaObject::connectSlotsByName(Rules);
    } // setupUi

    void retranslateUi(QWidget *Rules)
    {
        Rules->setWindowTitle(QCoreApplication::translate("Rules", "Form", nullptr));
        label->setText(QCoreApplication::translate("Rules", "Rules MENU", nullptr));
        Confirm_Button->setText(QCoreApplication::translate("Rules", "Confirm", nullptr));
        checkBox->setText(QCoreApplication::translate("Rules", "Activate Button 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rules: public Ui_Rules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULES_H
