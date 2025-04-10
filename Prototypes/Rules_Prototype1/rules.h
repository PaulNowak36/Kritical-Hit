#ifndef RULES_H
#define RULES_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDir>

namespace Ui {
class Rules;
}

class Rules : public QWidget
{
    Q_OBJECT

public:
    explicit Rules(QWidget *parent = nullptr);
    ~Rules();

protected:
    void showEvent(QShowEvent *event) override;

signals:
    void rulesConfirmed();
    QSqlDatabase databaseCalled();
    void newDatabaseCalled();

private slots:
    void on_Confirm_Button_clicked();
    QSqlQuery newOpenDatabase(QSqlDatabase);
    void newGetDatabaseInfo(QSqlQuery);
    void changeRule(QSqlQuery);

private:
    Ui::Rules *ui;
    //QSqlDatabase *ules_DB;
};

#endif // RULES_H
