#ifndef NEWTEMPLATEMENU_H
#define NEWTEMPLATEMENU_H

#include <QWidget>

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

signals:
    void MainMenuClicked();

private:
    Ui::newTemplateMenu *ui;
};


#endif // NEWTEMPLATEMENU_H
