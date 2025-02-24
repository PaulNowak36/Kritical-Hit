#ifndef TEMPLATEMAINMENU_H
#define TEMPLATEMAINMENU_H

#include <QWidget>

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

private:
    Ui::TemplateMainMenu *ui;
};

#endif // TEMPLATEMAINMENU_H
