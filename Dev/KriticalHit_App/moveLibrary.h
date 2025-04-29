#ifndef MOVELIBRARY_H
#define MOVELIBRARY_H

// MoveLibrary.h
#pragma once
#include "capacity.h"

namespace MoveLibrary
{
    inline capacity Pound = capacity("Pound", 40, 40, MoveCategory::Physical, {EffectType::Attack});
    inline capacity TakeDown = capacity("Take Down", 90, 20, MoveCategory::Physical, {EffectType::Attack});
    inline capacity VineWhip = capacity("Vine Whip", 45, 25, MoveCategory::Physical, {EffectType::Attack});
    inline capacity Bite = capacity("Bite", 60, 25, MoveCategory::Physical, {EffectType::Attack});

    inline capacity Recover = capacity("Recover", 0, 5, MoveCategory::Status, {EffectType::Heal});

    inline capacity SwordDance = capacity("Sword Dance", 0, 20, MoveCategory::Status, {EffectType::Buff});

    // Set additional properties directly
    inline void setupSpecialMoves()
    {
        Recover.setHealPercent(50);
        SwordDance.setStatModifiers(StatType::Strength, 2);
    }
}


#endif // MOVELIBRARY_H
