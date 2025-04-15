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
    ui->attackButton_3->setProperty("class", "templateButton");
    ui->quitButton->setProperty("class", "templateButton");

    initializeBattle();
    //updateButtonVisibility();

    // Prepare battle info box
    ui->statusLabel->setText("HERE WE GO !!!");

    // Display data about both characters
    showEntityInfo(player, ui->playerLabel);
    showEntityInfo(opponent, ui->opponentLabel);

    setAttacks(); //Display moveset data

    // Create a scene and attach it to the 2 QGraphicsViews
    scene = new QGraphicsScene(this);
    ui->graphicsView_2->setScene(scene);
    ui->graphicsView_3->setScene(scene);
    drawEllipse(scene); // display ellipses for player and opponent battle areas

    // set up Characters with full HP
    newUpdateHP(player, ui->playerHP);
    newUpdateHP(opponent, ui->opponentHP);

    // Initialize the timer once in the constructor
    timerTest = new QTimer(this);
    timerTest->setSingleShot(true);  // Make the timer single-shot
    connect(timerTest, &QTimer::timeout, this, &SimulationMenu::startTimer);


}

SimulationMenu::~SimulationMenu()
{
    delete ui;
}

void SimulationMenu::startTimer()
{
    qDebug() << "Timer out...";
    ui->statusLabel->setText("What will you do ?");
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

void SimulationMenu::showEntityInfo(Entity* entity, QLabel* label)
{
    std::string info;

    info.append(entity->getName() + "\n\n");
    info.append("HP: " + std::to_string(entity->getHealth()) + " \n");

    label->setText(QString::fromStdString(info));
    label->setAlignment(Qt::AlignLeft | Qt::AlignTop);
}



void SimulationMenu::initializeBattle()
{// set up characters and their moveset

    // set up moves
    attack1 = new capacity("Pound", 40, MoveCategory::Physical, {EffectType::Attack});
    attack2 = new capacity("Take Down", 90, MoveCategory::Physical, {EffectType::Attack});
    attack3 = new capacity("Recover", 0, MoveCategory::Status, {EffectType::Heal});
    attack3->setHealPercent(50);

    //set up moveset with the new moves
    std::array<capacity, 4> moveset = {*attack1, *attack2, *attack3};

    //set up characters with their name, stats and moveset
    player = new Entity("Agribizarre", 11, 30, 30, 15, 15, 14, *attack1, moveset, 0);
    opponent = new Entity("Temaratatta", 5, 18, 18, 10, 8, 12, *attack1, moveset, 0);

    //initialize battle with the 2 characters
    battle = new Battle(player, opponent);
    battle->getState();
    updateButtonVisibility();


}

void SimulationMenu::updateButtonVisibility() {
    Battle::BattleState state = battle->getState();

    bool shouldShowButtons = (state == Battle::BattleState::WaitingForPlayer);

    ui->attackButton_1->setVisible(shouldShowButtons);
    ui->attackButton_2->setVisible(shouldShowButtons);
    ui->attackButton_3->setVisible(shouldShowButtons);
    ui->quitButton->setVisible(shouldShowButtons);
}


//display battle info
void SimulationMenu::showNewInfo(Entity *attacker, int move)
{
    std::string info;

    if (attacker == player) // If the player is the attacker
    {
        /*info.append(player->getName() + " attacked " + opponent->getName() + ". \n" + opponent->getName() + " loses " +
                    std::to_string(damages) + " HP !");*/

        info.append(player->getName() + " uses " + player->getNewSkill(move).getAttackName() + " !");

    }
    else if (attacker == opponent) // If the opponent is the attacker
    {
        /*info.append(opponent->getName() + " attacked " + player->getName() + ". \n" + player->getName() + " loses " +
                    std::to_string(damages) + " HP !");*/
        info.append(opponent->getName() + " uses " + opponent->getNewSkill(move).getAttackName() + " !");
    }

    ui->statusLabel->setText(QString::fromStdString(info));
}


//Set up pushButtons attacks with characters moves
void SimulationMenu::setAttacks()
{
    std::string attackInfo1;
    std::string attackInfo2;
    std::string attackInfo3;

    //set up attack 1 Button
    attackInfo1.append(player->getNewSkill(0).getAttackName() + " \n" + "Pow: " + std::to_string(player->getNewSkill(0).getAttackPower()));
    ui->attackButton_1->setText(QString::fromStdString(attackInfo1));

    //set up attack 2 Button
    attackInfo2.append(player->getNewSkill(1).getAttackName() + " \n" + "Pow: " + std::to_string(player->getNewSkill(1).getAttackPower()));
    ui->attackButton_2->setText(QString::fromStdString(attackInfo2));

    //set up attack 3 Button
    attackInfo3.append(player->getNewSkill(2).getAttackName() + " \n" + "Pow: " + std::to_string(player->getNewSkill(2).getAttackPower()));
    ui->attackButton_3->setText(QString::fromStdString(attackInfo3));
}

void SimulationMenu::newUpdateHP(Entity* entity, QProgressBar* hpBar)
{
    // Debug: Log health before the update
    qDebug() << "Health before update:" << entity->getHealth()
             << " / Max Health:" << entity->getMaxHealth();

    int life = (entity->getHealth() * 100) / entity->getMaxHealth();
    hpBar->setValue(life);

    // Debug: Log health after the update (same as before, since we only updated the progress bar)
    qDebug() << "Health after update:" << entity->getHealth()
             << " / Max Health:" << entity->getMaxHealth();
}

bool SimulationMenu::playerTurn(int attack)
{
    Battle::EffectResult result = battle->performMove(player, opponent, attack);
    showNewInfo(player, attack);
    return handleMoveResult(player, opponent, result);
}

bool SimulationMenu::opponentTurn(int attack)
{
    Battle::EffectResult result = battle->performMove(opponent, player, attack);
    showNewInfo(opponent, attack);
    return handleMoveResult(opponent, player, result);
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
    showEntityInfo(player, ui->playerLabel);
    showEntityInfo(opponent, ui->opponentLabel);

    // Reset characters to full HP
    int playerLife = (player->getMaxHealth() * 100) / player->getMaxHealth(); // Set player HP to max HP
    ui->playerHP->setValue(playerLife);

    int opponentLife = (opponent->getMaxHealth() * 100) / opponent->getMaxHealth(); // Set opponent HP to max HP
    ui->opponentHP->setValue(opponentLife);
}

void SimulationMenu::newCheckAttack(int move)
{
    battle->Battle::performTurn();
    updateButtonVisibility(); // Hide buttons immediately

    Battle::checkAttackOrder(player, opponent);

    if (player->getAttackOrder() < opponent->getAttackOrder())
    {
        if (playerTurn(move) == false)
        {
            battle->endBattle();
            resetBattle();
            emit battleFinished();
            return;
        }

        QTimer::singleShot(2000, this, [this, move]() {
            if (opponentTurn(move) == false)
            {
                battle->endBattle();
                resetBattle();
                emit battleFinished();
                return;
            }

            // Add 2-second delay before next turn update
            QTimer::singleShot(2000, this, [this]() {
                battle->nextTurn(); // This will set the state to WaitingForPlayer
                updateButtonVisibility(); // Update button visibility
                ui->statusLabel->setText("What will you do ?");
            });
        });
    }
    else
    {
        if (opponentTurn(move) == false)
        {
            battle->endBattle();
            resetBattle();
            emit battleFinished();
            return;
        }

        QTimer::singleShot(2000, this, [this, move]() {
            if (playerTurn(move) == false)
            {
                battle->endBattle();
                resetBattle();
                emit battleFinished();
                return;
            }

            // Add 2-second delay before next turn update
            QTimer::singleShot(2000, this, [this]() {
                battle->nextTurn(); // This will set the state to WaitingForPlayer
                updateButtonVisibility(); // Update button visibility
                ui->statusLabel->setText("What will you do ?");
            });
        });
    }
}


bool SimulationMenu::handleMoveResult(Entity* attacker, Entity* defender, Battle::EffectResult result)
{
    if (result.damageDealt > 0)
    {
        qDebug() << "-> Deals damage! Damage dealt: " << result.damageDealt;

        // Update UI for defender's health
        defender->checkHealth();
        if (defender == player)
        {
            newUpdateHP(player, ui->playerHP);
            showEntityInfo(player, ui->playerLabel);
        }
        else
        {
            newUpdateHP(opponent, ui->opponentHP);
            showEntityInfo(opponent, ui->opponentLabel);
        }

        // Check for win/loss
        if (defender->getHealth() <= 0)
        {
            if (attacker == player)
            {
                QMessageBox::information(0, "You won!", QString::fromStdString("+ " + std::to_string(20) + " EXP"));
            }
            else
            {
                QMessageBox::information(0, "You lost!", "GAME OVER");
            }
            return false;
        }
    }

    // Handle heal result if any
    if (result.hpHealed > 0)
    {
        qDebug() << "-> Heals HP! Life received: " << result.hpHealed;

        // Update UI for attacker's health
        attacker->checkHealth();
        if (attacker == player)
        {
            newUpdateHP(player, ui->playerHP);
            showEntityInfo(player, ui->playerLabel);
        }
        else
        {
            newUpdateHP(opponent, ui->opponentHP);
            showEntityInfo(opponent, ui->opponentLabel);
        }
    }

    qDebug() << "Move executed successfully, returning true.";
    return true;
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

void SimulationMenu::on_attackButton_3_clicked()
{
    newCheckAttack(2);
}

// Allow the user to quit the simulation anytime
void SimulationMenu::on_quitButton_clicked()
{
    QMessageBox::information(0, "You quit the simulation!", QString::fromStdString("How was your battle like ?"));
    battle->endBattle();
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

    timerTest->start(5000);  // Start the timer after showing the widget

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


