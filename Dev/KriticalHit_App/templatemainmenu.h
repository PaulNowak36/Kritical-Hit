#ifndef TEMPLATEMAINMENU_H
#define TEMPLATEMAINMENU_H

#include <QWidget>
#include "simulationmenu.h"

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
    void on_logOut_Button2_2_clicked();

    void moveTemplateMenu();

private:
    Ui::TemplateMainMenu *ui;
    SimulationMenu _simInfo;
};

#endif // TEMPLATEMAINMENU_H
