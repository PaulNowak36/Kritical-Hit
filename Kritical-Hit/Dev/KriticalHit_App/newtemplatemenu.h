#ifndef NEWTEMPLATEMENU_H
#define NEWTEMPLATEMENU_H

#include <QWidget>
#include <templatemainmenu.h>

namespace Ui {
class newTemplateMenu;
}

class newTemplateMenu : public QWidget
{
    Q_OBJECT

public:
    explicit newTemplateMenu(QWidget *parent = nullptr);
    ~newTemplateMenu();

private slots:
    void on_quit_Button_clicked();
    void on_defaultStyle_Button_clicked();
    void on_return_Button_clicked();
    void on_quit_Button_2_clicked();
    void on_customStyle_Button_clicked();
    void on_quit_Button_3_clicked();
    void on_return_Button_2_clicked();
    void on_TurnBasedRPG_Button_clicked();
    void on_quit_Button_4_clicked();
    void on_return_Button_3_clicked();
    void on_pokemon_Button_clicked();

signals:
    void MainMenuClicked();

private:
    Ui::newTemplateMenu *ui;
    TemplateMainMenu _TempMainInfo;
};

#endif // NEWTEMPLATEMENU_H
