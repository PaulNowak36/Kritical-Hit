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
#include <vector>
#include <iostream>


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
    void setAttacks();
    void newUpdateHP(Entity*, QProgressBar*);
    void newCheckAttack(int);
    bool handleMoveResult(Entity*, Entity*, Battle::EffectResult);
    bool entityPerformMove2(Entity*, Entity*, int);
    bool playerAttack(int);
    bool playerTurn(int);
    bool opponentAttack(int);
    bool opponentTurn(int);
    bool newAttack(int);
    void resetBattle();
    void initializeBattle();
    void updateButtonVisibility();
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
