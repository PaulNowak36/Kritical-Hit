#ifndef TEMPLATEMAINMENU_H
#define TEMPLATEMAINMENU_H

#include <QWidget>
#include "simulationmenu.h"
#include "rulesmenu.h"

namespace Ui {
class TemplateMainMenu;
}

class TemplateMainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit TemplateMainMenu(QWidget *parent = nullptr);
    ~TemplateMainMenu();

signals:
    void LoginMenuClicked();


private slots:
    void on_logOut_Button2_clicked();

    void moveTemplateMenu();

    void on_simulation_Button_clicked();

    void on_rules_Button_clicked();

private:
    Ui::TemplateMainMenu *ui;
    SimulationMenu _simInfo;
    rulesMenu _rulesInfo;
};

#endif // TEMPLATEMAINMENU_H
