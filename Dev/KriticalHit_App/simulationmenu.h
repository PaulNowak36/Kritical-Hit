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
    void showInfo();
    void updatePlayerHP();
    void updateOpponentHP();
    bool attack();
    void resetBattle();
    ~SimulationMenu();

private slots:
    void on_attackButton_1_clicked();

    void on_escapeButton_clicked();

    void on_quitButton_clicked();

signals:
    void battleFinished();

protected:
    void showEvent(QShowEvent *event) override; // Ensure scene is set up properly

private:
    Ui::SimulationMenu *ui;
    Entity *player;
    Entity *opponent;
    Battle *battle;
    QGraphicsScene *scene; // Scene for drawing the ellipse

    /*std::string playerInfo;
    std::string opponentInfo;
    std::string battleInfo;*/
};

#endif // SIMULATIONMENU_H
