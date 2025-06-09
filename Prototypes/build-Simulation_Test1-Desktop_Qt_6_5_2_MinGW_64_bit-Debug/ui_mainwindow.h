/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *BattleWindow;
    QPushButton *escapeButton;
    QLabel *opponentLabel;
    QLabel *statusLabel;
    QGraphicsView *graphicsView;
    QLabel *playerLabel;
    QPushButton *attackButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        BattleWindow = new QWidget(MainWindow);
        BattleWindow->setObjectName("BattleWindow");
        escapeButton = new QPushButton(BattleWindow);
        escapeButton->setObjectName("escapeButton");
        escapeButton->setGeometry(QRect(390, 410, 101, 41));
        opponentLabel = new QLabel(BattleWindow);
        opponentLabel->setObjectName("opponentLabel");
        opponentLabel->setGeometry(QRect(440, 80, 181, 161));
        opponentLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 140);\n"
"color: black;\n"
"font: 14pt \"MS UI Gothic\";"));
        statusLabel = new QLabel(BattleWindow);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(90, 270, 551, 91));
        statusLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 140);\n"
"color: black;\n"
"font: 14pt \"MS UI Gothic\";"));
        graphicsView = new QGraphicsView(BattleWindow);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(60, 40, 640, 460));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(\"C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Prototypes/Simulation_Test1/Images/BattleBackground.jpeg\") 100% stretch;\n"
""));
        playerLabel = new QLabel(BattleWindow);
        playerLabel->setObjectName("playerLabel");
        playerLabel->setGeometry(QRect(100, 82, 221, 141));
        playerLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 140);\n"
"color: black;\n"
"font: 14pt \"MS UI Gothic\";"));
        attackButton = new QPushButton(BattleWindow);
        attackButton->setObjectName("attackButton");
        attackButton->setGeometry(QRect(220, 410, 101, 41));
        MainWindow->setCentralWidget(BattleWindow);
        graphicsView->raise();
        playerLabel->raise();
        attackButton->raise();
        opponentLabel->raise();
        statusLabel->raise();
        escapeButton->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        escapeButton->setText(QCoreApplication::translate("MainWindow", "Escape", nullptr));
        opponentLabel->setText(QCoreApplication::translate("MainWindow", "Pokemon2", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        playerLabel->setText(QCoreApplication::translate("MainWindow", "Pokemon1", nullptr));
        attackButton->setText(QCoreApplication::translate("MainWindow", "Attack", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
