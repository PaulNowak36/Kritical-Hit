#include "Setup.h"
#include <QDebug>

Setup::Setup()
{
    MoveLibrary::setupSpecialMoves();
    initializeMoveset();      // Select which ones you want

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

void Setup::initializeMoveset()
{
    moveset = {
        MoveLibrary::Pound,
        MoveLibrary::TakeDown,
        MoveLibrary::VineWhip,
        MoveLibrary::Bite
    };
}
