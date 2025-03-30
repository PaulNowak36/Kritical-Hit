#ifndef SIMULATIONMENU_H
#define SIMULATIONMENU_H

#include <QWidget>
#include <QMainWindow>
#include <QMessageBox>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include "entity.h"
#include "battle.h"

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
    void showPlayerInfo();
    void showOpponentInfo();
    void showNewInfo(Entity*, int);
    void setAttacks();
    void updatePlayerHP();
    void updateOpponentHP();
    void newCheckAttack(int);
    bool playerAttack(int);
    bool opponentAttack(int);
    bool newAttack(int);
    void resetBattle();
    void initializeBattle();
    ~SimulationMenu();

private slots:
    void on_attackButton_1_clicked();
    void on_attackButton_2_clicked();
    void on_quitButton_clicked();
    //void on_escapeButton_clicked();

signals:
    void battleFinished();

protected:
    void showEvent(QShowEvent *event) override; // Ensure scene is set up properly

private:
    Ui::SimulationMenu *ui;
    Entity *player;
    Entity *opponent;
    Battle *battle;
    capacity *attack1;
    capacity *attack2;
    std::array<capacity, 4> moveset;
    QGraphicsScene *scene; // Scene for drawing the ellipse

};

#endif // SIMULATIONMENU_H
