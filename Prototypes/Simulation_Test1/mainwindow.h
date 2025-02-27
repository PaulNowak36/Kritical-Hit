#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "entity.h"
#include "battle.h"

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

private slots:
    void on_attackButton_clicked();

private:
    Ui::MainWindow *ui;
    Entity *player;
    Entity *opponent;
    Battle *battle;
};
#endif // MAINWINDOW_H
