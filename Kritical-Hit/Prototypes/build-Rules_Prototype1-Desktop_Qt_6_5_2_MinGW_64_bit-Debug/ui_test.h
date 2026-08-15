/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *return_Button;

    void setupUi(QWidget *Test)
    {
        if (Test->objectName().isEmpty())
            Test->setObjectName("Test");
        Test->resize(800, 480);
        label = new QLabel(Test);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 90, 241, 71));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 700 24pt \"Segoe UI\";\n"
"\n"
"color: rgb(255, 0, 0);"));
        pushButton = new QPushButton(Test);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 190, 171, 91));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(255, 255, 127);\n"
"font: 900 20pt \"Segoe UI\";"));
        pushButton_2 = new QPushButton(Test);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(440, 190, 171, 91));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(255, 255, 127);\n"
"font: 900 20pt \"Segoe UI\";"));
        pushButton_3 = new QPushButton(Test);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(290, 320, 171, 91));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(255, 255, 127);\n"
"font: 900 20pt \"Segoe UI\";"));
        return_Button = new QPushButton(Test);
        return_Button->setObjectName("return_Button");
        return_Button->setGeometry(QRect(30, 50, 101, 51));
        return_Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(255, 85, 0);\n"
"font: 900 20pt \"Segoe UI\";"));

        retranslateUi(Test);

        QMetaObject::connectSlotsByName(Test);
    } // setupUi

    void retranslateUi(QWidget *Test)
    {
        Test->setWindowTitle(QCoreApplication::translate("Test", "Form", nullptr));
        label->setText(QCoreApplication::translate("Test", "TEST MENU", nullptr));
        pushButton->setText(QCoreApplication::translate("Test", "Button 1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Test", "Button 2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Test", "Button 3", nullptr));
        return_Button->setText(QCoreApplication::translate("Test", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test: public Ui_Test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
