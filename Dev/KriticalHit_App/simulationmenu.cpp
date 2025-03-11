#include "simulationmenu.h"
#include "ui_simulationmenu.h"

SimulationMenu::SimulationMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimulationMenu),
    scene(nullptr)
{
    ui->setupUi(this);

    QPixmap backSprite("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/BulbasaurSprite_Back.png");
    ui->playerSprite->setPixmap(backSprite);
    ui->playerSprite->setScaledContents(true);
    QPixmap frontSprite("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/RattataSprite_Front.png");
    ui->opponentSprite->setPixmap(frontSprite);
    ui->opponentSprite->setScaledContents(true);

    ui->statusLabel->setText("Waiting for action...");
    player = new Entity("Agribizarre", 29, 29, 14, 14);
    opponent = new Entity("Temaratatta", 18, 18, 10, 8);
        battle = new Battle(player, opponent);
    showStatus();

    // Create a scene and attach it to the 2 QGraphicsViews
    scene = new QGraphicsScene(this);
    ui->graphicsView_2->setScene(scene);
    ui->graphicsView_3->setScene(scene);

    drawEllipse(scene);
}

SimulationMenu::~SimulationMenu()
{
    delete ui;
}

void SimulationMenu::drawEllipse(QGraphicsScene *ellipse)
{
    // Set up a yellow border and green fill
    QPen borderPen(QColor("#d9de9c"));
    borderPen.setWidth(10); // Border thickness

    QBrush fillBrush(QColor("#9ce49b"));

    // Draw the ellipse with specified dimensions
    ellipse->addEllipse(20, 20, 330, 80, borderPen, fillBrush);
}


void SimulationMenu::showStatus()
{
    std::string info;
    info.append(player->getName() + "\n\n");
    if (player->getHealth())
    {
        info.append( "HP: " + std::to_string(player->getHealth()) + " \n" );

    }
    /*if (player->getStrength())
    {
        info.append( "STRENGTH: " +  std::to_string(player->getStrength()) + " \n");
    }
    if (player->getDefence())
    {
        info.append( "DEFENCE:    " + std::to_string(player->getDefence()) + " \n");

    }*/
    ui->playerLabel->setText(QString::fromStdString(info));
    ui->playerLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);

    info = "";

    info.append(opponent->getName() + "\n\n");
    if (opponent->getHealth())
    {
        info.append( "HP: " + std::to_string(opponent->getHealth()) + " \n" );

    }
    /*if (opponent->getStrength())
    {
        info.append( "STRENGTH: " +  std::to_string(opponent->getStrength()) + " \n");
    }
    if (opponent->getDefence())
    {
        info.append( "DEFENCE:    " + std::to_string(opponent->getDefence()) + " \n");

    }*/
    ui->opponentLabel->setText(QString::fromStdString(info));
    ui->opponentLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);
}

void SimulationMenu::showInfo()
{
    std::string info;
    info.append(player->getName() + " attacked " + opponent->getName() + ". \nOpponent loses " +
                std::to_string(Battle::getDamage(player, opponent)) + "HP ! \n" +
                opponent->getName() + " attacked " + player->getName() + ". \nYou lost " +
                std::to_string(Battle::getDamage(opponent, player)) + " HP !");
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

void SimulationMenu::resetBattle()
{
    // Delete existing objects to prevent memory leaks
    delete player;
    delete opponent;
    delete battle;

    // Reinitialize characters and battle
    player = new Entity("Agribizarre", 29, 29, 14, 14);
    opponent = new Entity("Temaratatta", 18, 18, 10, 8);
        battle = new Battle(player, opponent);

    // Reset UI labels
    ui->statusLabel->setText("What will you do ?");
        showStatus();
}

void SimulationMenu::on_attackButton_1_clicked()
{
    if(attack() == false)
    {
        QMessageBox::information(0, "You lost!", QString::fromStdString("GAME OVER"));
        resetBattle();  // Reset the game before exiting
        emit battleFinished();   //wylaczyc gre

    }
    if(!opponent)
    {
        resetBattle();  // Reset the game before exiting
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
        resetBattle();  // Reset the game before exiting
        emit battleFinished();
    }
}


void SimulationMenu::on_quitButton_clicked()
{
    QMessageBox::information(0, "You quit the simulation!", QString::fromStdString("How was your battle like ?"));
    resetBattle();  // Reset the game before exiting
    emit battleFinished();
}

void SimulationMenu::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    if (!scene->items().isEmpty()) {
        scene->update();
    }
}

