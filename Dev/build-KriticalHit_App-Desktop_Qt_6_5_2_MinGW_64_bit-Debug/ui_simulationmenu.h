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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimulationMenu
{
public:
    QLabel *statusLabel;
    QPushButton *quitButton;
    QLabel *opponentLabel;
    QGraphicsView *graphicsView;
    QPushButton *attackButton_1;
    QLabel *playerLabel;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QLabel *playerSprite;
    QLabel *opponentSprite;
    QProgressBar *opponentHP;
    QProgressBar *playerHP;

    void setupUi(QWidget *SimulationMenu)
    {
        if (SimulationMenu->objectName().isEmpty())
            SimulationMenu->setObjectName("SimulationMenu");
        SimulationMenu->resize(800, 480);
        SimulationMenu->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: #fffbde;\n"
"	color: black;\n"
"	font: 10pt \"Press Start 2P\";	\n"
"	border: 2px solid #587372;\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QLabel#playerSprite, QLabel#opponentSprite {\n"
"	background: transparent;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton.templateButton {\n"
"    font: 10pt \"Press Start 2P\";	\n"
"    color: rgb(255, 255, 255);\n"
"    background-color: orange; \n"
"    border: 2px solid #000000;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QProgressBar {\n"
"	background-color: black;\n"
"    border: 2px solid black;\n"
"    border-radius: 10px;\n"
"	text-align: center;\n"
"    color: transparent;\n"
"	min-width: 200px;\n"
"    max-width: 200px;\n"
"	min-height: 20px;\n"
"    max-height: 20px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #73fbaa;\n"
"	 border-radius: 10px;\n"
"    margin-left: 2px;    \n"
"	margin-right: 2px;\n"
"}\n"
""));
        statusLabel = new QLabel(SimulationMenu);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(0, 340, 431, 91));
        statusLabel->setStyleSheet(QString::fromUtf8(""));
        quitButton = new QPushButton(SimulationMenu);
        quitButton->setObjectName("quitButton");
        quitButton->setGeometry(QRect(680, 10, 101, 41));
        opponentLabel = new QLabel(SimulationMenu);
        opponentLabel->setObjectName("opponentLabel");
        opponentLabel->setGeometry(QRect(20, 10, 301, 121));
        opponentLabel->setStyleSheet(QString::fromUtf8(""));
        graphicsView = new QGraphicsView(SimulationMenu);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 800, 480));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(\"C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Prototypes/Simulation_Test1/Images/BattleBackground.jpeg\") 100% stretch;\n"
""));
        attackButton_1 = new QPushButton(SimulationMenu);
        attackButton_1->setObjectName("attackButton_1");
        attackButton_1->setGeometry(QRect(440, 340, 131, 51));
        playerLabel = new QLabel(SimulationMenu);
        playerLabel->setObjectName("playerLabel");
        playerLabel->setGeometry(QRect(480, 210, 301, 121));
        playerLabel->setStyleSheet(QString::fromUtf8(""));
        graphicsView_2 = new QGraphicsView(SimulationMenu);
        graphicsView_2->setObjectName("graphicsView_2");
        graphicsView_2->setGeometry(QRect(30, 280, 371, 121));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border: none;"));
        graphicsView_3 = new QGraphicsView(SimulationMenu);
        graphicsView_3->setObjectName("graphicsView_3");
        graphicsView_3->setGeometry(QRect(400, 90, 371, 121));
        graphicsView_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border: none;"));
        playerSprite = new QLabel(SimulationMenu);
        playerSprite->setObjectName("playerSprite");
        playerSprite->setGeometry(QRect(110, 208, 201, 171));
        opponentSprite = new QLabel(SimulationMenu);
        opponentSprite->setObjectName("opponentSprite");
        opponentSprite->setGeometry(QRect(490, 40, 201, 161));
        opponentHP = new QProgressBar(SimulationMenu);
        opponentHP->setObjectName("opponentHP");
        opponentHP->setGeometry(QRect(100, 100, 204, 24));
        opponentHP->setValue(24);
        playerHP = new QProgressBar(SimulationMenu);
        playerHP->setObjectName("playerHP");
        playerHP->setGeometry(QRect(560, 300, 204, 24));
        playerHP->setValue(24);
        graphicsView->raise();
        attackButton_1->raise();
        playerLabel->raise();
        quitButton->raise();
        opponentLabel->raise();
        graphicsView_2->raise();
        statusLabel->raise();
        graphicsView_3->raise();
        playerSprite->raise();
        opponentSprite->raise();
        opponentHP->raise();
        playerHP->raise();

        retranslateUi(SimulationMenu);

        QMetaObject::connectSlotsByName(SimulationMenu);
    } // setupUi

    void retranslateUi(QWidget *SimulationMenu)
    {
        SimulationMenu->setWindowTitle(QCoreApplication::translate("SimulationMenu", "Form", nullptr));
        statusLabel->setText(QCoreApplication::translate("SimulationMenu", "TextLabel", nullptr));
        quitButton->setText(QCoreApplication::translate("SimulationMenu", "Quit", nullptr));
        opponentLabel->setText(QCoreApplication::translate("SimulationMenu", "Pokemon2", nullptr));
        attackButton_1->setText(QCoreApplication::translate("SimulationMenu", "Text", nullptr));
        playerLabel->setText(QCoreApplication::translate("SimulationMenu", "Pokemon1", nullptr));
        playerSprite->setText(QCoreApplication::translate("SimulationMenu", "Bulbasaur", nullptr));
        opponentSprite->setText(QCoreApplication::translate("SimulationMenu", "Rattatta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimulationMenu: public Ui_SimulationMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATIONMENU_H
