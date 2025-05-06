#include "simulationmenu.h"
#include "ui_simulationmenu.h"

SimulationMenu::SimulationMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimulationMenu),
    scene(nullptr)
{

    qDebug() << "SimulationMenu constructor called";
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
    ui->attackButton_4->setProperty("class", "templateButton");
    ui->quitButton->setProperty("class", "templateButton");

    // Prepare battle info box
    showStatusMessage(STATUS_START);

    // Create a scene and attach it to the 2 QGraphicsViews
    scene = new QGraphicsScene(this);
    ui->graphicsView_2->setScene(scene);
    ui->graphicsView_3->setScene(scene);
    drawEllipse(scene); // display ellipses for player and opponent battle areas

    // Initialize the timer once in the constructor
    timerTest = new QTimer(this);
    timerTest->setSingleShot(true);  // Make the timer single-shot
    connect(timerTest, &QTimer::timeout, this, &SimulationMenu::startTimer);


}

SimulationMenu::~SimulationMenu()
{
    delete player;
    delete opponent;
    delete battle;
    delete battleSetup;
    delete ui;
}

void SimulationMenu::startTimer()
{
    qDebug() << "Timer out...";
    showStatusMessage(STATUS_DECISION);
    battle->battleBegin();
    updateButtonVisibility();
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

    // Clean up any existing setup if necessary
    if (battleSetup) {
        delete battleSetup;
    }

    // Allocate new Setup instance
    battleSetup = new Setup();

    // Get moveset and characters
    moveset = battleSetup->getMoveset();
    player = battleSetup->getPlayer();
    opponent = battleSetup->getOpponent();

    // Assign attack shortcuts
    attack1 = &moveset[0];
    attack2 = &moveset[1];
    attack3 = &moveset[2];
    attack4 = &moveset[3];

    // Create the battle
    battle = new Battle(player, opponent);

    // Debug
    qDebug() << "[SimulationMenu] Player created:" << QString::fromStdString(player->getName());
    qDebug() << "[SimulationMenu] Opponent created:" << QString::fromStdString(opponent->getName());

    for (int i = 0; i < 4; ++i) {
        qDebug() << " Move" << i << ": " << QString::fromStdString(player->getNewSkill(i).getAttackName())
                 << " Power:" << player->getNewSkill(i).getAttackPower();
    }

    updateButtonVisibility();
}

void SimulationMenu::updateButtonVisibility() {
    Battle::BattleState state = battle->getState();

    bool shouldShowButtons = (state == Battle::BattleState::WaitingForPlayer);

    ui->attackButton_1->setVisible(shouldShowButtons);
    ui->attackButton_2->setVisible(shouldShowButtons);
    ui->attackButton_3->setVisible(shouldShowButtons);
    ui->attackButton_4->setVisible(shouldShowButtons);
    ui->quitButton->setVisible(shouldShowButtons);
}

void SimulationMenu::endSimulation()
{
    battle->endBattle();
    resetBattle();
    emit battleFinished();
}


//display battle info
void SimulationMenu::showNewInfo(Entity *attacker, int move)
{
    if (attacker == player)
    {
        showDynamicStatusMessage(MSG_ATTACK_ACTION, player->getName(), player->getNewSkill(move).getAttackName(), "");
    }
    else if (attacker == opponent)
    {
        showDynamicStatusMessage(MSG_ATTACK_ACTION, opponent->getName(), opponent->getNewSkill(move).getAttackName(), "");
    }
}


void SimulationMenu::showStatusMessage(StatusMessage messageCode)
{
    switch (messageCode)
    {
    case STATUS_START:
        ui->statusLabel->setText("HERE WE GO !!!");
        break;

    case STATUS_DECISION:
        ui->statusLabel->setText("What will you do ?");
        break;

        // Add more cases here if needed

    default:
        ui->statusLabel->setText("Unknown status message.");
        break;
    }
}

void SimulationMenu::showDynamicStatusMessage(DynamicStatusMessage type, const std::string& actorName, const std::string& skillName,  const std::string& statName)
{
    std::string message;

    switch (type)
    {
    case MSG_ATTACK_ACTION:
        message = actorName + " uses " + skillName + " !";
        break;

    case MSG_HEAL_ACTION:
        message = actorName + " regained health !";
        break;

    case MSG_BUFF_ACTION_1:
        message = actorName + "'s " + statName + " rose !";
        break;

    case MSG_BUFF_ACTION_2:
        message = actorName + "'s " + statName + " rose sharply !";
        break;

    case MSG_BUFF_ACTION_3:
        message = actorName + "'s " + statName + " rose drastically !";
        break;

    default:
        message = "Unknown dynamic message.";
        break;
    }

    ui->statusLabel->setText(QString::fromStdString(message));
}



//Set up pushButtons attacks with characters moves
void SimulationMenu::setAttacks()
{

    // Array of pointers to the four attack buttons
    QPushButton* attackButtons[4] = {
        ui->attackButton_1,
        ui->attackButton_2,
        ui->attackButton_3,
        ui->attackButton_4
    };


    for (int i = 0; i < 4; ++i)
    {
        const auto& skill = player->getNewSkill(i);
        std::string attackInfo = skill.getAttackName();

        if (battleSetup->getPPRule()) {//Display the moves remaining and max PPs if PPRule is true
            attackInfo += " \n \n" +
                          std::to_string(skill.getPowerPoints()) + "/" +
                          std::to_string(skill.getMaxPowerPoints());
        }
        // else just display the attack name
        attackButtons[i]->setText(QString::fromStdString(attackInfo));
    }
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


// Reset battle when it's over or if the player quit the game
void SimulationMenu::resetBattle()
{
    // Delete existing objects to prevent memory leaks
    delete player;
    player = nullptr;

    delete opponent;
    opponent = nullptr;

    delete battle;
    battle = nullptr;

    // Reinitialize characters and battle
    initializeBattle();

    // Reset UI labels

    showStatusMessage(STATUS_START);
    showEntityInfo(player, ui->playerLabel);
    showEntityInfo(opponent, ui->opponentLabel);

    // Reset characters to full HP
    int playerLife = (player->getMaxHealth() * 100) / player->getMaxHealth(); // Set player HP to max HP
    ui->playerHP->setValue(playerLife);

    int opponentLife = (opponent->getMaxHealth() * 100) / opponent->getMaxHealth(); // Set opponent HP to max HP
    ui->opponentHP->setValue(opponentLife);
}

// This function initiates a turn by determining attack order,
// performing the first move, handling any healing,
// and scheduling the second character's move.
void SimulationMenu::newCheckAttack(int move)
{
    // Perform any general turn setup logic (e.g., increase turn count)
    battle->Battle::performTurn();

    // Update button visibility based on the current state of the game
    updateButtonVisibility();

    // Determine which character goes first based on speed or other criteria
    Battle::checkAttackOrder(player, opponent);
    bool playerGoesFirst = player->getAttackOrder() < opponent->getAttackOrder();

    // Perform the move for the character who goes first
    //auto firstTurn = playerGoesFirst ? playerTurn(move) : opponentTurn(move);
    auto firstTurn = playerGoesFirst ? playerTurn(move) : enemyTurn();

    // If the battle ends after the first move (e.g., opponent defeated), stop here
    if (!firstTurn.continueBattle)
    {
        endSimulation();
        return;
    }

    // Handle healing, then buffing, then second character's move
    handleHealing(firstTurn, [=]() {
        handleBuffing(firstTurn, [=]() {
            secondCharacterPerform(!playerGoesFirst, move);
        });
    });
}

MoveResultState SimulationMenu::handleMoveResult(Entity* attacker, Entity* defender, Battle::EffectResult result, std::shared_ptr<capacity> move)
{
    MoveResultState state{true, false, false, nullptr, nullptr};

    // Handle damage dealt
    if (result.damageDealt > 0)
    {
        qDebug() << "-> Deals damage! Damage dealt: " << result.damageDealt;

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
    }

    // Handle healing
    if (result.hpHealed > 0)
    {
        state.hasHealing = true;
        state.character = attacker;

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

    // Handle Buffing
    if (result.attackBoost != 0 || result.defenceBoost != 0 || result.speedBoost != 0)
    {
        state.hasBuffing = true;
        state.character = attacker;
        state.moveUsed = move;  // Store the move as shared_ptr
    }

    // Check for win/loss after all effects
    if (defender->getHealth() <= 0)
    {
        state.continueBattle = false;
        if (attacker == player)
            QMessageBox::information(0, "You won!", QString::fromStdString("+ " + std::to_string(20) + " EXP"));
        else
            QMessageBox::information(0, "You lost!", "GAME OVER");
    }

    //Update number of PP of an attack after each use
    setAttacks();

    return state;
}

void SimulationMenu::handleHealing(const MoveResultState& result, std::function<void()> nextStep)
{
    if (result.hasHealing)
    {
        // Wait 2s BEFORE showing "Character regained health"
        QTimer::singleShot(2000, this, [this, result, nextStep]() {
            showDynamicStatusMessage(MSG_HEAL_ACTION, result.character->getName(), "", "");

            // Then wait 2s more before continuing
            nextStep();
        });
    }
    else
    {
        nextStep();  // No healing? Just move on
    }
}

//For now it only work if the buffing capacity has only 1 statModifier
void SimulationMenu::handleBuffing(const MoveResultState& result, std::function<void()> nextStep)
{
    if (!result.hasBuffing)
    {
        nextStep();
        return;
    }

    const StatModifier& modifier = result.moveUsed->getStatModifier(0);
    const QString statChanged = QString::fromStdString(result.moveUsed->statTypeToString(modifier.stat));
    const int boost = modifier.amount;

    qDebug() << "handleBuffing -> Stat:" << statChanged << ", Amount:" << boost;

    DynamicStatusMessage buffMessage =
        (boost >= 3) ? MSG_BUFF_ACTION_3 :
            (boost == 2) ? MSG_BUFF_ACTION_2 :
            MSG_BUFF_ACTION_1;

    QTimer::singleShot(2000, this, [this, result, statChanged, nextStep, buffMessage]() {
        showDynamicStatusMessage(buffMessage, result.character->getName(), "", statChanged.toStdString());
        nextStep();
    });
}




void SimulationMenu::goToNextTurn()
{
    battle->nextTurn();
    updateButtonVisibility();
    showStatusMessage(STATUS_DECISION);
}

void SimulationMenu::secondCharacterPerform(bool isPlayer, int move)
{
    QTimer::singleShot(2000, this, [=]() {
        //MoveResultState result = isPlayer ? playerTurn(move) : opponentTurn(move);
        MoveResultState result = isPlayer ? playerTurn(move) : enemyTurn();

        if (!result.continueBattle)
        {
            endSimulation();
            return;
        }

        handleHealing(result, [this, result]() {
            handleBuffing(result, [this]() {
                QTimer::singleShot(2000, this, [this]() {
                    goToNextTurn();
                });
            });
        });
    });
}

MoveResultState SimulationMenu::playerTurn(int attack)
{
    Battle::EffectResult result = battle->performMove(player, opponent, attack);
    showNewInfo(player, attack);
    std::shared_ptr<capacity> chosenSkill = std::make_shared<capacity>(player->getNewSkill(attack));
    return handleMoveResult(player, opponent, result, chosenSkill);
}

MoveResultState SimulationMenu::opponentTurn(int attack)
{
    Battle::EffectResult result = battle->performMove(opponent, player, attack);
    showNewInfo(opponent, attack);
    std::shared_ptr<capacity> chosenSkill = std::make_shared<capacity>(opponent->getNewSkill(attack));
    return handleMoveResult(opponent, player, result, chosenSkill);
}

MoveResultState SimulationMenu::enemyTurn()
{
    // Get random move index
    int moveIndex = battle->randomMoveIndex();

    // Perform move using AI logic
    Battle::EffectResult result = battle->performMove(opponent, player, moveIndex);

    // Display opponent's move info
    showNewInfo(opponent, moveIndex);

    // Get the chosen skill
    std::shared_ptr<capacity> chosenSkill = std::make_shared<capacity>(opponent->getNewSkill(moveIndex));

    // Handle the result of the move
    return handleMoveResult(opponent, player, result, chosenSkill);
}


// Performs attack 1 from player's moveset
void SimulationMenu::on_attackButton_1_clicked()
{
    if (battleSetup->getPPRule() == false || player->getNewSkill(0).useCapacity()) {
        newCheckAttack(0);
    } else {
        QMessageBox::warning(this, "No PP Left", "This move cannot be used anymore.");
    }

}

// Performs attack 2 from player's moveset
void SimulationMenu::on_attackButton_2_clicked()
{
    if (battleSetup->getPPRule() == false || player->getNewSkill(1).useCapacity()) {
        newCheckAttack(1);
    } else {
        QMessageBox::warning(this, "No PP Left", "This move cannot be used anymore.");
    }

}

void SimulationMenu::on_attackButton_3_clicked()
{
    if (battleSetup->getPPRule() == false || player->getNewSkill(2).useCapacity()) {
        newCheckAttack(2);
    } else {
        QMessageBox::warning(this, "No PP Left", "This move cannot be used anymore.");
    }
}

void SimulationMenu::on_attackButton_4_clicked()
{
    if (battleSetup->getPPRule() == false || player->getNewSkill(3).useCapacity()) {
        newCheckAttack(3);
    } else {
        QMessageBox::warning(this, "No PP Left", "This move cannot be used anymore.");
    }
}


// Allow the user to quit the simulation anytime
void SimulationMenu::on_quitButton_clicked()
{
    QMessageBox::information(0, "You quit the simulation!", QString::fromStdString("How was your battle like ?"));
    endSimulation();
}

// Ensures the widget is shown properly and refreshes the scene if it contains items
void SimulationMenu::showEvent(QShowEvent *event)
{
    // Call the base class implementation to ensure the widget is shown properly
    QWidget::showEvent(event);

    //Set up the battle once the widget is visible
    initializeBattle();

    // Display data about both characters
    showEntityInfo(player, ui->playerLabel);
    showEntityInfo(opponent, ui->opponentLabel);

    setAttacks(); //Display moveset data

    newUpdateHP(player, ui->playerHP);
    newUpdateHP(opponent, ui->opponentHP);


    // If the scene contains any items, trigger an update to refresh the display
    if (!scene->items().isEmpty()) {
        scene->update();
    }

    timerTest->start(2000);  // Start the timer after showing the widget

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
