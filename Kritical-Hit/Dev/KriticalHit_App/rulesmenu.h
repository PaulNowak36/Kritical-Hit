#ifndef RULESMENU_H
#define RULESMENU_H

#include <QWidget>
#include "database.h"

namespace Ui {
class rulesMenu;
}

class rulesMenu : public QWidget
{
    Q_OBJECT

public:
    explicit rulesMenu(QWidget *parent = nullptr);
    ~rulesMenu();

protected:
    void showEvent(QShowEvent *event) override;

private slots:
    void on_Confirm_Button_clicked();

signals:
    void rulesConfirmed();

private:
    Ui::rulesMenu *ui;
};

#endif // RULESMENU_H
