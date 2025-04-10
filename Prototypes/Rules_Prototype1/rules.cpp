#include "rules.h"
#include "ui_rules.h"
#include <QDebug>

Rules::Rules(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rules)
{
    ui->setupUi(this);
    //ui->checkBox->setCheckState(Qt::Checked);

}

Rules::~Rules()
{
    delete ui;
}

void Rules::showEvent(QShowEvent *event)
{// the signal will be emitted every time the Rules widget is shown in the QStackedWidget
    QWidget::showEvent(event); // Call base implementation

    QSqlDatabase rules_DB = emit databaseCalled();
    newGetDatabaseInfo(newOpenDatabase(rules_DB));
}

void Rules::on_Confirm_Button_clicked()
{
    /*QSqlQuery query(*rules_DB);
    changeRule(query);*/

    if(ui->checkBox->isChecked())
    {
        qDebug() << "YEAH ITS CHECKED !!!";
    } else {
        qDebug() << "NO ITS NOT !!!";
    }
    emit rulesConfirmed();
}

QSqlQuery Rules::newOpenDatabase(QSqlDatabase ruleDatabase)
{
    ruleDatabase.open();
    QSqlDatabase::database().transaction();
    QSqlQuery query(ruleDatabase);
    return query;
}

void Rules::newGetDatabaseInfo(QSqlQuery query)
{
    query.prepare("SELECT * FROM RULES_SET");

    if (!query.exec()) {
        qDebug() << "Data retrieval failed: " << query.lastError().text();
        return;
    }

    if (query.next()) {
        // Retrieving each column's value
        QString ID = query.value("ID").toString();
        bool R1 = query.value("RULE1").toBool();
        QString Rule1 = R1 ? "true" : "false";
        if(R1){
            ui->checkBox->setCheckState(Qt::Checked);
        } else {
            ui->checkBox->setCheckState(Qt::Unchecked);
        }

        // Debug Output
        qDebug() << "Rule found!";
        qDebug() << "ID:" << ID;
        qDebug() << "Rule 1 activated:" << Rule1;
    }
}

void Rules::changeRule(QSqlQuery query)
{
    bool Rule1 = query.value("RULE1").toBool();

    query.prepare("UPDATE RULES_SET SET RULE1=:Rule1");

    if(Rule1){
        ui->checkBox->setCheckState(Qt::Checked);
    } else {
        ui->checkBox->setCheckState(Qt::Unchecked);
    }

    if (query.exec()) {
        QSqlDatabase::database().commit();
        qDebug() << "Data updated successfully!";
    } else {
        QSqlDatabase::database().rollback();
        qDebug() << "Update failed, transaction rolled back: " << query.lastError();
    }

}

