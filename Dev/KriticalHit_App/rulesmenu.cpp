#include "rulesmenu.h"
#include "ui_rulesmenu.h"

rulesMenu::rulesMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rulesMenu)
{
    ui->setupUi(this);
}

rulesMenu::~rulesMenu()
{
    delete ui;
}

void rulesMenu::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    /*bool healRule = database::getHealingRule();
    bool buffRule = database::getBuffingRule();
    bool PPRule = database::getPPRule();
    ui->healing_checkBox->setChecked(healRule);
    ui->buffing_checkBox->setChecked(buffRule);
    ui->PP_checkBox->setChecked(PPRule);*/

    QMap<QString, bool> rules = database::getAllRules();
    ui->healing_checkBox->setChecked(rules["healingAllowed"]);
    ui->buffing_checkBox->setChecked(rules["buffingAllowed"]);
    ui->PP_checkBox->setChecked(rules["PPSystem"]);
}

void rulesMenu::on_Confirm_Button_clicked()
{

    bool newHealValue = ui->healing_checkBox->isChecked();
    bool newBuffValue = ui->buffing_checkBox->isChecked();
    bool newPPValue = ui->PP_checkBox->isChecked();

    /*database::setHealingRule(newHealValue);
    database::setBuffingRule(newBuffValue);
    database::setPPRule(newPPValue);*/

    if (!database::setAllRules(newHealValue, newBuffValue, newPPValue)) {
        qDebug() << "Failed to update rules!";
    }

    emit rulesConfirmed();
}

