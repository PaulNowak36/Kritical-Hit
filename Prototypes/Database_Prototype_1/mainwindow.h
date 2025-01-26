#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_Insert_Button_clicked();

    void on_Get_Button_clicked();

    void on_Insert_Button_2_clicked();

    void on_Update_Button_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase DB_Connection;
};
#endif // MAINWINDOW_H
