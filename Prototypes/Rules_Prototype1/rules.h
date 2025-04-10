#ifndef RULES_H
#define RULES_H

#include <QWidget>

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
    void databaseCalled();

private slots:
    void on_Confirm_Button_clicked();

private:
    Ui::Rules *ui;
};

#endif // RULES_H
