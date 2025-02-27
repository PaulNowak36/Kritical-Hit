#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusLabel->setText("Waiting for action...");
    player = new Entity("Ouvrichu", 15, 15, 25, 20);
    opponent = new Entity("Melogénieur", 20, 20, 18, 22);

    showStatus();
}

void MainWindow::showStatus()
{
    std::string info;
    info.append(player->getName() + "\n\n");
    if (player->getHealth())
    {
        info.append( "HP:       " + std::to_string(player->getHealth()) + " \n" );

    }
    if (player->getStrength())
    {
        info.append( "STRENGTH: " +  std::to_string(player->getStrength()) + " \n");
    }
    if (player->getDefence())
    {
        info.append( "DEFENCE:    " + std::to_string(player->getDefence()) + " \n");

    }
    ui->playerLabel->setText(QString::fromStdString(info));
    ui->playerLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);

    info = "";

    info.append(opponent->getName() + "\n\n");
    if (opponent->getHealth())
    {
        info.append( "HP:       " + std::to_string(opponent->getHealth()) + " \n" );

    }
    if (opponent->getStrength())
    {
        info.append( "STRENGTH: " +  std::to_string(opponent->getStrength()) + " \n");
    }
    if (opponent->getDefence())
    {
        info.append( "DEFENCE:    " + std::to_string(opponent->getDefence()) + " \n");

    }
    ui->opponentLabel->setText(QString::fromStdString(info));
    ui->opponentLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);
}

MainWindow::~MainWindow()
{
    delete ui;
}

