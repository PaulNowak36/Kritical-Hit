#ifndef SIMULATIONMENU_H
#define SIMULATIONMENU_H

#include <QWidget>
#include <QMainWindow>
#include <QMessageBox>
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
    void showStatus();
    void showInfo();
    bool attack();
    void resetBattle();
    ~SimulationMenu();

private slots:
    void on_attackButton_1_clicked();

    void on_escapeButton_clicked();

signals:
    void battleFinished();

private:
    Ui::SimulationMenu *ui;
    Entity *player;
    Entity *opponent;
    Battle *battle;

    /*std::string playerInfo;
    std::string opponentInfo;
    std::string battleInfo;*/
};

#endif // SIMULATIONMENU_H
