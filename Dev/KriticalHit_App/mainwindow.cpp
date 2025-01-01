#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->logOut_Button->setIcon(QIcon("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/logout.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{
    QString Username = ui -> username_Edit ->text();
    QString Password = ui -> password_Edit ->text();

    if (Username == "algoPaul" && Password == "IPlayPKMNGo")
    {
        QMessageBox::information(this, Username, "Login success.");
        ui->stackedWidget->setCurrentIndex(1);
    }
    else
    {
        QMessageBox::warning(this, Username, "Please enter valid username or password.");
    }
}


void MainWindow::on_logOut_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

