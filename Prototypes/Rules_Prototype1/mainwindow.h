#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rules.h"
#include "test.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDir>
#include <utility>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    //void handleDatabaseCall();

private slots:
    void on_rules_Button_clicked();
    void on_test_Button_clicked();
    void moveMainMenu();
    //QSqlQuery openDatabase();
    //void getDatabaseInfo(QSqlQuery);
    //QSqlDatabase getDatabase();

private:
    Ui::MainWindow *ui;
    Rules _rulesInfo;
    Test _testInfo;
    //QSqlDatabase DB_Connection;
};
#endif // MAINWINDOW_H
