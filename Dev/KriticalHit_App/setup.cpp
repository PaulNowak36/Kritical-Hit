#include "Setup.h"
#include <QDebug>

Setup::Setup()
{
    moveset = {
        capacity("Pound", 40, MoveCategory::Physical, {EffectType::Attack}),
        capacity("Take Down", 90, MoveCategory::Physical, {EffectType::Attack}),
        capacity("Recover", 0, MoveCategory::Status, {EffectType::Heal}),
        capacity("Sword Dance", 0, MoveCategory::Status, {EffectType::Buff})
    };

    // Additional settings
    moveset[2].setHealPercent(50);  // Recover heals
    moveset[3].setStatModifiers(StatType::Strength, 2); // Sword Dance buffs Strength

    // Debug
    qDebug() << "[Setup] Moveset initialized:";
    for (const auto& move : moveset) {
        qDebug() << " - " << QString::fromStdString(move.getAttackName()) << ", Power:" << move.getAttackPower();
    }
}

std::array<capacity, 4> Setup::getMoveset()
{
    return moveset;
}

Entity* Setup::getPlayer()
{
    std::vector<int> baseStats = {30, 15, 15, 14};
    return new Entity("Agribizarre", 11, baseStats, moveset, 0);
}

Entity* Setup::getOpponent()
{
    std::vector<int> baseStats = {26, 16, 12, 19};
    return new Entity("Temaratatta", 10, baseStats, moveset, 0);
}
