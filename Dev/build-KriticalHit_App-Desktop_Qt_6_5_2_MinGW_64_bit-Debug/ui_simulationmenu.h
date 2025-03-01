/********************************************************************************
** Form generated from reading UI file 'simulationmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATIONMENU_H
#define UI_SIMULATIONMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimulationMenu
{
public:
    QLabel *statusLabel;
    QPushButton *escapeButton;
    QLabel *opponentLabel;
    QGraphicsView *graphicsView;
    QPushButton *attackButton_1;
    QLabel *playerLabel;

    void setupUi(QWidget *SimulationMenu)
    {
        if (SimulationMenu->objectName().isEmpty())
            SimulationMenu->setObjectName("SimulationMenu");
        SimulationMenu->resize(800, 480);
        statusLabel = new QLabel(SimulationMenu);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(70, 240, 551, 91));
        statusLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 140);\n"
"color: black;\n"
"font: 14pt \"MS UI Gothic\";"));
        escapeButton = new QPushButton(SimulationMenu);
        escapeButton->setObjectName("escapeButton");
        escapeButton->setGeometry(QRect(640, 350, 101, 41));
        opponentLabel = new QLabel(SimulationMenu);
        opponentLabel->setObjectName("opponentLabel");
        opponentLabel->setGeometry(QRect(420, 30, 181, 161));
        opponentLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 140);\n"
"color: black;\n"
"font: 14pt \"MS UI Gothic\";"));
        graphicsView = new QGraphicsView(SimulationMenu);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 800, 480));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(\"C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Prototypes/Simulation_Test1/Images/BattleBackground.jpeg\") 100% stretch;\n"
""));
        attackButton_1 = new QPushButton(SimulationMenu);
        attackButton_1->setObjectName("attackButton_1");
        attackButton_1->setGeometry(QRect(190, 350, 101, 41));
        playerLabel = new QLabel(SimulationMenu);
        playerLabel->setObjectName("playerLabel");
        playerLabel->setGeometry(QRect(50, 40, 221, 141));
        playerLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 140);\n"
"color: black;\n"
"font: 14pt \"MS UI Gothic\";"));
        graphicsView->raise();
        attackButton_1->raise();
        playerLabel->raise();
        escapeButton->raise();
        opponentLabel->raise();
        statusLabel->raise();

        retranslateUi(SimulationMenu);

        QMetaObject::connectSlotsByName(SimulationMenu);
    } // setupUi

    void retranslateUi(QWidget *SimulationMenu)
    {
        SimulationMenu->setWindowTitle(QCoreApplication::translate("SimulationMenu", "Form", nullptr));
        statusLabel->setText(QCoreApplication::translate("SimulationMenu", "TextLabel", nullptr));
        escapeButton->setText(QCoreApplication::translate("SimulationMenu", "Escape", nullptr));
        opponentLabel->setText(QCoreApplication::translate("SimulationMenu", "Pokemon2", nullptr));
        attackButton_1->setText(QCoreApplication::translate("SimulationMenu", "Attack 1", nullptr));
        playerLabel->setText(QCoreApplication::translate("SimulationMenu", "Pokemon1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimulationMenu: public Ui_SimulationMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATIONMENU_H
