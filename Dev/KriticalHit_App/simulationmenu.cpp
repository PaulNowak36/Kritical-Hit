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
    ui->attackButton_4->setProperty("class", "templateButton");
    ui->quitButton->setProperty("class", "templateButton");

    initializeBattle();

    // Prepare battle info box
    showStatusMessage(STATUS_START);

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
    delete player;
    delete opponent;
    delete battle;
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

    // set up moves
    /*attack1 = new capacity("Pound", 40, MoveCategory::Physical, {EffectType::Attack});
    attack2 = new capacity("Take Down", 90, MoveCategory::Physical, {EffectType::Attack});
    attack3 = new capacity("Recover", 0, MoveCategory::Status, {EffectType::Heal});
    attack3->setHealPercent(50);
    attack4 = new capacity("Sword Dance", 0, MoveCategory::Status, {EffectType::Buff});
    attack4->setStatModifiers(StatType::Strength, 2);  // Buff Strength by 2 stages

    //set up moveset with the new moves
    std::array<capacity, 4> moveset = {*attack1, *attack2, *attack3, *attack4};

    std::vector<int> agribizarre_baseStats = {30, 15, 15, 14};
    std::vector<int> temarattata_baseStats = {26, 16, 12, 19};

    //set up characters with their name, stats and moveset
    player = new Entity("Agribizarre", 11, agribizarre_baseStats, moveset, 0);
    //opponent = new Entity("Temaratatta", 5, 18, 18, 10, 8, 12, moveset, 0);
    opponent = new Entity("Temaratatta", 10, temarattata_baseStats, moveset, 0);

    //initialize battle with the 2 characters
    battle = new Battle(player, opponent);
    battle->getState();*/

    Setup setup;

    // Get moveset and characters
    moveset = setup.getMoveset();
    player = setup.getPlayer();
    opponent = setup.getOpponent();

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
    std::string attackInfo1;
    std::string attackInfo2;
    std::string attackInfo3;
    std::string attackInfo4;

    //set up attack 1 Button
    attackInfo1.append(player->getNewSkill(0).getAttackName() + " \n" + "Pow: " + std::to_string(player->getNewSkill(0).getAttackPower()));
    ui->attackButton_1->setText(QString::fromStdString(attackInfo1));

    //set up attack 2 Button
    attackInfo2.append(player->getNewSkill(1).getAttackName() + " \n" + "Pow: " + std::to_string(player->getNewSkill(1).getAttackPower()));
    ui->attackButton_2->setText(QString::fromStdString(attackInfo2));

    //set up attack 3 Button
    attackInfo3.append(player->getNewSkill(2).getAttackName() + " \n" + "Pow: " + std::to_string(player->getNewSkill(2).getAttackPower()));
    ui->attackButton_3->setText(QString::fromStdString(attackInfo3));

    //set up attack 4 Button
    attackInfo4.append(player->getNewSkill(3).getAttackName() + " \n" + "Pow: " + std::to_string(player->getNewSkill(3).getAttackPower()));
    ui->attackButton_4->setText(QString::fromStdString(attackInfo4));
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
    auto firstTurn = playerGoesFirst ? playerTurn(move) : opponentTurn(move);

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
        MoveResultState result = isPlayer ? playerTurn(move) : opponentTurn(move);

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

void SimulationMenu::on_attackButton_4_clicked()
{
    newCheckAttack(3);
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
