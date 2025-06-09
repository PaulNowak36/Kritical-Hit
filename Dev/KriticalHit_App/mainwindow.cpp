#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStorageInfo>
#include <QDebug>
#include <QPixmap>

void printRootDriveInfo() {
    QStorageInfo storage = QStorageInfo::root();

    qDebug() << storage.rootPath();
    if (storage.isReadOnly())
        qDebug() << "isReadOnly:" << storage.isReadOnly();

    qDebug() << "name:" << storage.name();
    qDebug() << "filesystem type:" << storage.fileSystemType();
    qDebug() << "size:" << storage.bytesTotal()/1024/1024 << "MB";
    qDebug() << "free space:" << storage.bytesAvailable()/1024/1024 << "MB";
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(2, &_newTempInfo);
    ui->stackedWidget->insertWidget(3, &_TempMainInfo);

    connect(&_newTempInfo, SIGNAL(MainMenuClicked()), this, SLOT(moveMainMenu()));
    connect(&_TempMainInfo, SIGNAL(LoginMenuClicked()), this, SLOT(moveLoginMenu()));

    ui->logOut_Button->setIcon(QIcon("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/logout.png"));

    printRootDriveInfo();

    ui->username_Edit->setPlaceholderText("Username");
    ui->password_Edit->setPlaceholderText("Password");

    ui->newTemplate_Button->setProperty("class", "templateButton");
    ui->loadTemplate_Button->setProperty("class", "templateButton");
    ui->testMode_Button->setProperty("class", "templateButton");
    ui->logOut_Button->setProperty("class", "templateButton");

    QPixmap pm("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/KriticalHit_Logo1.png"); // <- path to image file
    ui->logoLabel->setPixmap(pm);
    ui->logoLabel->setScaledContents(true);
    ui->logoLabel_2->setPixmap(pm);
    ui->logoLabel_2->setScaledContents(true);

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
        ui->stackedWidget->setCurrentIndex(3);
        //ui->stackedWidget->setCurrentIndex(1);
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

void MainWindow::on_newTemplate_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::moveMainMenu()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::moveLoginMenu()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_loadTemplate_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

