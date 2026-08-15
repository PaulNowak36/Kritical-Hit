#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <newtemplatemenu.h>
#include <templatemainmenu.h>

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
    void on_loginButton_clicked();
    void on_logOut_Button_clicked();
    void on_newTemplate_Button_clicked();
    void moveMainMenu();
    void moveLoginMenu();

    void on_loadTemplate_Button_clicked();

private:
    Ui::MainWindow *ui;
    newTemplateMenu _newTempInfo;
    TemplateMainMenu _TempMainInfo;
};
#endif // MAINWINDOW_H
