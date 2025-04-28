#include "Setup.h"
#include <QDebug>

Setup::Setup()
{
    MoveLibrary::setupSpecialMoves();

    healTrue = database::getHealingRule();
    qDebug() << "healTrue : " << healTrue;
    buffTrue = database::getBuffingRule();
    qDebug() << "buffTrue : " << buffTrue;
    PPTrue = database::getPPRule();
    qDebug() << "PPTrue : " << PPTrue;

    initializeMoveset();      // Select which ones you want
    filterMoveset();          // 🔥 Adjust it according to rules

    // Debug
    qDebug() << "[Setup] Moveset initialized:";
    for (const auto& move : moveset) {
        qDebug() << " - " << QString::fromStdString(move.getAttackName()) << ", Power:" << move.getAttackPower();
    }

    database::closeDatabase(); // 🛑 Close it here when finished loading everything
    qDebug() << "Database closed after Setup.";
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

void Setup::initializeMoveset()
{
    moveset = {
        MoveLibrary::Pound,
        MoveLibrary::TakeDown,
        MoveLibrary::Recover,
        MoveLibrary::SwordDance
    };
}

void Setup::filterMoveset()
{
    for (auto& move : moveset)
    {
        const std::vector<EffectType>& effects = move.getEffects(); // Assuming getEffects() exists and returns std::vector<EffectType>

        // Check if move has a Heal effect
        bool isHeal = std::find(effects.begin(), effects.end(), EffectType::Heal) != effects.end();
        bool isBuff = std::find(effects.begin(), effects.end(), EffectType::Buff) != effects.end();

        if (!healTrue && isHeal)
        {
            move = MoveLibrary::VineWhip; // Replace Heal moves with VineWhip
        }
        else if (!buffTrue && isBuff)
        {
            move = MoveLibrary::Bite; // Replace Buff moves with Bite
        }
    }
}
