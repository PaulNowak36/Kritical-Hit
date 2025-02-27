#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "entity.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void showStatus();
    void showInfo();
    bool attack();
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Entity *player;
    Entity *opponent;
};
#endif // MAINWINDOW_H
