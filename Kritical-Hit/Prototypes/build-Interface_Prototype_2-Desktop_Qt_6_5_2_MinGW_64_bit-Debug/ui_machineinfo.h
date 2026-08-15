/********************************************************************************
** Form generated from reading UI file 'machineinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINEINFO_H
#define UI_MACHINEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MachineInfo
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_RPG_Picture;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QLabel *label;
    QWidget *page_2;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QWidget *page_3;
    QScrollBar *verticalScrollBar;
    QPushButton *pushButton_3;

    void setupUi(QWidget *MachineInfo)
    {
        if (MachineInfo->objectName().isEmpty())
            MachineInfo->setObjectName("MachineInfo");
        MachineInfo->resize(820, 480);
        MachineInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        stackedWidget = new QStackedWidget(MachineInfo);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 801, 491));
        page = new QWidget();
        page->setObjectName("page");
        label_RPG_Picture = new QLabel(page);
        label_RPG_Picture->setObjectName("label_RPG_Picture");
        label_RPG_Picture->setGeometry(QRect(240, 250, 291, 181));
        label_RPG_Picture->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_RPG_Picture->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(530, 130, 231, 81));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);"));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(50, 140, 231, 81));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 70, 291, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 italic 22pt \"Segoe UI\";"));
        label->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalWidget = new QWidget(page_2);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setGeometry(QRect(90, 20, 291, 371));
        verticalWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(520, 100, 231, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalScrollBar = new QScrollBar(page_3);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(200, 110, 21, 201));
        verticalScrollBar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalScrollBar->setOrientation(Qt::Vertical);
        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(520, 100, 231, 81));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);"));
        stackedWidget->addWidget(page_3);

        retranslateUi(MachineInfo);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MachineInfo);
    } // setupUi

    void retranslateUi(QWidget *MachineInfo)
    {
        MachineInfo->setWindowTitle(QCoreApplication::translate("MachineInfo", "Form", nullptr));
        label_RPG_Picture->setText(QCoreApplication::translate("MachineInfo", "RPG Picture", nullptr));
        pushButton->setText(QCoreApplication::translate("MachineInfo", "Screen 2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MachineInfo", "Home", nullptr));
        label->setText(QCoreApplication::translate("MachineInfo", "MachineInfo", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MachineInfo", "Screen 3", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MachineInfo", "Screen 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MachineInfo: public Ui_MachineInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINEINFO_H
