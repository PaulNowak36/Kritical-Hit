#include "simulationmenu.h"
#include "ui_simulationmenu.h"

SimulationMenu::SimulationMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimulationMenu),
    scene(nullptr)
{
    ui->setupUi(this);

    //display the player sprite
    QPixmap backSprite("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/BulbasaurSprite_Back.png");
    ui->playerSprite->setPixmap(backSprite);
    ui->playerSprite->setScaledContents(true);

    //display the opponent sprite
    QPixmap frontSprite("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/RattataSprite_Front.png");
    ui->opponentSprite->setPixmap(frontSprite);
    ui->opponentSprite->setScaledContents(true);

    //Set up the pushButtons
    ui->attackButton_1->setProperty("class", "templateButton");
    ui->attackButton_2->setProperty("class", "templateButton");
    ui->quitButton->setProperty("class", "templateButton");

    initializeBattle();

    // Prepare battle info box
    ui->statusLabel->setText("What will you do ?");

    // Display data about both characters
    showPlayerInfo();
    showOpponentInfo();
    setAttacks(); //Display moveset data

    // Create a scene and attach it to the 2 QGraphicsViews
    scene = new QGraphicsScene(this);
    ui->graphicsView_2->setScene(scene);
    ui->graphicsView_3->setScene(scene);
    drawEllipse(scene); // display ellipses for player and opponent battle areas

    // set up Characters with full HP
    updatePlayerHP();
    updateOpponentHP();

    qDebug() << "Player actual HP: " << std::to_string(player->getHealth());

}

SimulationMenu::~SimulationMenu()
{
    delete ui;
}

// Draw an ellipse representing the characters' battle areas
void SimulationMenu::drawEllipse(QGraphicsScene *ellipse)
{
    // Define the border style: yellow-green color with a thickness of 10 pixels
    QPen borderPen(QColor("#d9de9c"));
    borderPen.setWidth(10);

    // Define the fill style: solid green color
    QBrush fillBrush(QColor("#9ce49b"));

    // Add an ellipse to the scene at position (20,20) with a width of 330 and height of 80
    ellipse->addEllipse(20, 20, 330, 80, borderPen, fillBrush);
}


void SimulationMenu::initializeBattle()
{// set up characters and their moveset

    // set up moves
    attack1 = new capacity("Pound", 40);
    attack2 = new capacity("Take Down", 90);

    //set up moveset with the new moves
    std::array<capacity, 4> moveset = {*attack1, *attack2};

    //set up characters with their name, stats and moveset
    player = new Entity("Agribizarre", 11, 30, 30, 15, 15, 14, *attack1, moveset);
    opponent = new Entity("Temaratatta", 5, 18, 18, 10, 8, 12, *attack1, moveset);

    //initialize battle with the 2 characters
    battle = new Battle(player, opponent);


}

// Display HP data for player
void SimulationMenu::showPlayerInfo()
{
    std::string playerInfo;

    //Display player HP
    playerInfo.append(player->getName() + "\n\n");
    if (player->getHealth())
    {
        playerInfo.append( "HP: " + std::to_string(player->getHealth()) + " \n" );

    }
    ui->playerLabel->setText(QString::fromStdString(playerInfo));
    ui->playerLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);

    //reinitialize info
    playerInfo = "";
}

// Display HP data for opponent
void SimulationMenu::showOpponentInfo()
{
    std::string opponentInfo;

    //Display opponent HP
    opponentInfo.append(opponent->getName() + "\n\n");
    if (opponent->getHealth())
    {
        opponentInfo.append( "HP: " + std::to_string(opponent->getHealth()) + " \n" );

    }
    ui->opponentLabel->setText(QString::fromStdString(opponentInfo));
    ui->opponentLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);

    //reinitialize opponentInfo
    opponentInfo = "";
}

//display battle info
void SimulationMenu::showInfo()
{
    std::string info;
    info.append(player->getName() + " attacked " + opponent->getName() + ". \nOpponent loses " +
                std::to_string(Battle::getDamage(player, opponent)) + "HP ! \n" +
                opponent->getName() + " attacked " + player->getName() + ". \nYou lost " +
                std::to_string(Battle::getDamage(opponent, player)) + " HP !");
    ui->statusLabel->setText(QString::fromStdString(info));
}

void SimulationMenu::showNewInfo(Entity *attacker)
{
    std::string info;

    if (attacker == player) // If the player is the attacker
    {
        info.append(player->getName() + " attacked " + opponent->getName() + ". \nOpponent loses " +
                    std::to_string(Battle::getDamage(player, opponent)) + " HP !");
    }
    else if (attacker == opponent) // If the opponent is the attacker
    {
        info.append(opponent->getName() + " attacked " + player->getName() + ". \nYou lost " +
                    std::to_string(Battle::getDamage(opponent, player)) + " HP !");
    }

    ui->statusLabel->setText(QString::fromStdString(info));
}


//Set up pushButtons attacks with characters moves
void SimulationMenu::setAttacks()
{
    std::string attackInfo1;
    std::string attackInfo2;

    //set up attack 1 Button
    attackInfo1.append(player->getNewSkill(0).getAttackName() + " \n" + "Pow: " + std::to_string(player->getNewSkill(0).getAttackPower()));
    ui->attackButton_1->setText(QString::fromStdString(attackInfo1));

    //set up attack 2 Button
    attackInfo2.append(player->getNewSkill(1).getAttackName() + " \n" + "Pow: " + std::to_string(player->getNewSkill(1).getAttackPower()));
    ui->attackButton_2->setText(QString::fromStdString(attackInfo2));
}

void SimulationMenu::updatePlayerHP()
{
    int playerLife = (player->getHealth() * 100) / player->getMaxHealth();
    ui->playerHP->setValue(playerLife);
}

void SimulationMenu::updateOpponentHP()
{
    int opponentLife = (opponent->getHealth() * 100) / opponent->getMaxHealth();
    ui->opponentHP->setValue(opponentLife);
}

bool SimulationMenu::playerAttack(int attack)
{
    // Makes the player attacks the opponent
    int playerDamage = Battle::newAttack(player, opponent, &player->getNewSkill(attack)); // Store damage dealt by player
    qDebug() << "Attack used: " << QString::fromStdString(player->getNewSkill(attack).getAttackName());
    showNewInfo(player);
    updateOpponentHP();
    opponent->checkHealth();

    // Checks if the opponent is still alive
    if (opponent->getHealth() > 0)
    {
        // Update opponent info
        showOpponentInfo();
        //showInfo(); // Update battle info

        // Display damages for debug
        qDebug() << "Player dealt: " << playerDamage << " damage.";

        // return opponent's state
        return true;
    }
    else
    {// the opponent has no more HP
        //End the battle
        QMessageBox::information(0, "You won!", QString::fromStdString("+ " + std::to_string(20) + " EXP"));
        qDebug() << "Player actual HP: " << std::to_string(player->getHealth());
        delete player;
        player = nullptr;
        delete opponent;
        opponent = nullptr;
        delete battle;
        battle = nullptr;
        return false;
    }
}

bool SimulationMenu::opponentAttack(int attack)
{
    // Makes the opponent attacks the player
    int opponentDamage = Battle::newAttack(opponent, player, &opponent->getNewSkill(attack)); // Store damage dealt by opponent
    qDebug() << "Attack used: " << QString::fromStdString(opponent->getNewSkill(attack).getAttackName());
    showNewInfo(opponent);
    updatePlayerHP();
    player->checkHealth();

    // Checks if the player is still alive
    if (player->getHealth() > 0)
    {
        // Update player info
        showPlayerInfo();
        //showInfo(); // Update battle info

        // Display damages for debug
        qDebug() << "Opponent dealt: " << opponentDamage << " damage.";
        qDebug() << "Player actual HP: " << std::to_string(player->getHealth());

        // return player's state
        return true;
    }
    else
    {// the player has no more HP
        //End the battle
        QMessageBox::information(0, "You lost!", QString::fromStdString("GAME OVER"));
        delete player;
        player = nullptr;
        delete opponent;
        opponent = nullptr;
        delete battle;
        battle = nullptr;
        return false;
    }
}


// Reset battle when it's over or if the player quit the game
void SimulationMenu::resetBattle()
{
    // Delete existing objects to prevent memory leaks
    delete player;
    delete opponent;
    delete battle;

    // Reinitialize characters and battle
    initializeBattle();

    // Reset UI labels
    ui->statusLabel->setText("What will you do ?");
    showPlayerInfo();
    showOpponentInfo();

    // Reset characters to full HP
    int playerLife = (player->getMaxHealth() * 100) / player->getMaxHealth(); // Set player HP to max HP
    ui->playerHP->setValue(playerLife);
    qDebug() << "Player HP must be set to MAX ";
    qDebug() << "Player actual HP: " << std::to_string(player->getHealth());

    int opponentLife = (opponent->getMaxHealth() * 100) / opponent->getMaxHealth(); // Set opponent HP to max HP
    ui->opponentHP->setValue(opponentLife);
}

void SimulationMenu::newCheckAttack(int move)
{
    // check if the player is still alive
    if(playerAttack(move) == false)
    {
        resetBattle();  // Reset the game before exiting
        emit battleFinished();
        return;

    }
    // check if the opponent is still alive
    if(opponentAttack(move) == false)
    {
        resetBattle();  // Reset the game before exiting
        emit battleFinished();
        return;
    }
}


// Performs attack 1 from player's moveset
void SimulationMenu::on_attackButton_1_clicked()
{
    newCheckAttack(0);
}

// Performs attack 2 from player's moveset
void SimulationMenu::on_attackButton_2_clicked()
{
    newCheckAttack(1);
}

// Allow the user to quit the simulation anytime
void SimulationMenu::on_quitButton_clicked()
{
    QMessageBox::information(0, "You quit the simulation!", QString::fromStdString("How was your battle like ?"));
    resetBattle();  // Reset the game before exiting
    emit battleFinished();
}

// Ensures the widget is shown properly and refreshes the scene if it contains items
void SimulationMenu::showEvent(QShowEvent *event)
{
    // Call the base class implementation to ensure the widget is shown properly
    QWidget::showEvent(event);

    // If the scene contains any items, trigger an update to refresh the display
    if (!scene->items().isEmpty()) {
        scene->update();
    }
}


// UNUSED: Allow the user to attempt escaping the battle with limited success
/*
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
}*/




