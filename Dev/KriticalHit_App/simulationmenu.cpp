#include "simulationmenu.h"
#include "ui_simulationmenu.h"

SimulationMenu::SimulationMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimulationMenu)
{
    ui->setupUi(this);
    ui->statusLabel->setText("Waiting for action...");
    player = new Entity("Ouvrichu", 15, 15, 25, 20);
    opponent = new Entity("Melogénieur", 10, 10, 12, 16);
        battle = new Battle(player, opponent);
    showStatus();
}

SimulationMenu::~SimulationMenu()
{
    delete ui;
}

void SimulationMenu::showStatus()
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

void SimulationMenu::showInfo()
{
    std::string info;
    info.append(player->getName() + " attacked " + opponent->getName() + ". Opponent loses " +
                std::to_string(Battle::getDamage(player, opponent)) + "HP \n" +
                opponent->getName() + " attacked " + player->getName() + ". You lost " +
                std::to_string(Battle::getDamage(opponent, player)) + " HP");
    ui->statusLabel->setText(QString::fromStdString(info));
}

bool SimulationMenu::attack()
{
    Battle::attack(player, opponent);
    if(opponent->getHealth() > 0)
    {
        Battle::attack(opponent, player);
        player->checkHealth();
        opponent->checkHealth();
        showStatus();
        showInfo();
        return player->getHealth() != 0;
    }
    else
    {
        QMessageBox::information(0, "You won!", QString::fromStdString("+ " + std::to_string(20) + " EXP"));
        delete opponent;
        opponent = 0;
        delete battle;
        battle = 0;
        return true;
    }

}

void SimulationMenu::on_attackButton_1_clicked()
{
    if(attack() == false)
    {
        QMessageBox::information(0, "You lost!", QString::fromStdString("GAME OVER"));
        emit battleFinished();    //wylaczyc gre
    }
    if(!opponent)
    {
        emit battleFinished();
    }
}


void SimulationMenu::on_escapeButton_clicked()
{
    int random = Entity::genRandom(0,5);
    if(random)
    {
        Battle::attack(opponent, player);
        player->checkHealth();
        opponent->checkHealth();
        showStatus();
        std::string info;
        info.append("You failed to escape! " + opponent->getName() + " attacked " + player->getName() + ".\nYou lost " +
                    std::to_string(Battle::getDamage(opponent, player)) + " HP");
        ui->statusLabel->setText(QString::fromStdString(info));
        if(player->getHealth() == 0)
        {
            QMessageBox::information(0, "You lost!", QString::fromStdString("GAME OVER"));
            parentWidget()->parentWidget()->close();      //wylaczyc gre
        }
    }
    else
    {
        QMessageBox::information(0, "You escaped!", QString::fromStdString("You got lucky! You were able to escape this fight!"));
        emit battleFinished();
    }
}

