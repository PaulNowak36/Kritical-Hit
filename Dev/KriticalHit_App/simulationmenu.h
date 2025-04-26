#ifndef SIMULATIONMENU_H
#define SIMULATIONMENU_H

#include <QWidget>
#include <QMainWindow>
#include <QMessageBox>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QTimer>
#include <QProgressBar>
#include "entity.h"
#include "capacity.h"
#include "battle.h"
#include "setup.h"
#include <vector>
#include <iostream>

enum StatusMessage {
    STATUS_START,
    STATUS_DECISION,
    // Add more statuses here as needed
};

enum DynamicStatusMessage {
    MSG_ATTACK_ACTION,
    MSG_HEAL_ACTION,
    MSG_BUFF_ACTION_1,
    MSG_BUFF_ACTION_2,
    MSG_BUFF_ACTION_3,
    // You can add more types like MSG_HEAL_ACTION, MSG_LEVEL_UP, etc.
};

struct MoveResultState {
    bool continueBattle;
    bool hasHealing;
    bool hasBuffing;
    Entity* character;
    std::shared_ptr<capacity> moveUsed;  // Use shared_ptr for better memory management
};


namespace Ui {
class SimulationMenu;
}

class SimulationMenu : public QWidget
{
    Q_OBJECT

public:
    explicit SimulationMenu(QWidget *parent = nullptr);
    void drawEllipse(QGraphicsScene *ellipse);
    void showStatus();
    void showEntityInfo(Entity*, QLabel*);
    void showNewInfo(Entity*, int);
    void showStatusMessage(StatusMessage);
    void showDynamicStatusMessage(DynamicStatusMessage, const std::string&, const std::string&, const std::string&);
    void setAttacks();
    void newUpdateHP(Entity*, QProgressBar*);
    void newCheckAttack(int);
    MoveResultState handleMoveResult(Entity*, Entity*, Battle::EffectResult, std::shared_ptr<capacity>);
    void handleHealing(const MoveResultState&, std::function<void()>);
    void handleBuffing(const MoveResultState&, std::function<void()>);
    void goToNextTurn();
    void secondCharacterPerform(bool, int);
    MoveResultState playerTurn(int);
    MoveResultState opponentTurn(int);
    void resetBattle();
    void initializeBattle();
    void updateButtonVisibility();
    void endSimulation();
    ~SimulationMenu();
    QTimer *timerTest;

public slots:
    void startTimer();

private slots:
    void on_attackButton_1_clicked();
    void on_attackButton_2_clicked();
    void on_quitButton_clicked();
    //void on_escapeButton_clicked();

    void on_attackButton_3_clicked();

    void on_attackButton_4_clicked();

signals:
    void battleFinished();
    void timesUp();

protected:
    void showEvent(QShowEvent *event) override; // Ensure scene is set up properly

private:
    Ui::SimulationMenu *ui;
    Entity *player;
    Entity *opponent;
    Battle *battle;
    capacity *attack1;
    capacity *attack2;
    capacity *attack3;
    capacity *attack4;
    std::array<capacity, 4> moveset;
    QGraphicsScene *scene; // Scene for drawing the ellipse

};

#endif // SIMULATIONMENU_H
