#ifndef RULESMENU_H
#define RULESMENU_H

#include <QWidget>

namespace Ui {
class rulesMenu;
}

class rulesMenu : public QWidget
{
    Q_OBJECT

public:
    explicit rulesMenu(QWidget *parent = nullptr);
    ~rulesMenu();

private:
    Ui::rulesMenu *ui;
};

#endif // RULESMENU_H
