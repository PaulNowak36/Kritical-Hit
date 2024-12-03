/********************************************************************************
** Form generated from reading UI file 'templatemenuinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATEMENUINFO_H
#define UI_TEMPLATEMENUINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TemplateMenuInfo
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;
    QLabel *label;
    QWidget *page_2;
    QPushButton *pushButton;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *TemplateMenuInfo)
    {
        if (TemplateMenuInfo->objectName().isEmpty())
            TemplateMenuInfo->setObjectName("TemplateMenuInfo");
        TemplateMenuInfo->resize(800, 480);
        TemplateMenuInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);"));
        stackedWidget = new QStackedWidget(TemplateMenuInfo);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-1, -1, 801, 541));
        page = new QWidget();
        page->setObjectName("page");
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(560, 200, 171, 81));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 85, 255);"));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 190, 171, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 85, 255);"));
        radioButton = new QRadioButton(page);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(320, 210, 181, 111));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 70, 291, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 italic 22pt \"Segoe UI\";"));
        label->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(580, 190, 171, 81));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 85, 255);"));
        verticalWidget = new QWidget(page_2);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setGeometry(QRect(200, 110, 251, 221));
        verticalWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget->addWidget(page_2);

        retranslateUi(TemplateMenuInfo);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TemplateMenuInfo);
    } // setupUi

    void retranslateUi(QWidget *TemplateMenuInfo)
    {
        TemplateMenuInfo->setWindowTitle(QCoreApplication::translate("TemplateMenuInfo", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TemplateMenuInfo", "Screen 2", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TemplateMenuInfo", "Home", nullptr));
        radioButton->setText(QCoreApplication::translate("TemplateMenuInfo", "RadioButton", nullptr));
        label->setText(QCoreApplication::translate("TemplateMenuInfo", "TemplateMenu", nullptr));
        pushButton->setText(QCoreApplication::translate("TemplateMenuInfo", "Screen 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TemplateMenuInfo: public Ui_TemplateMenuInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATEMENUINFO_H
