#ifndef MOVELIBRARY_H
#define MOVELIBRARY_H

// MoveLibrary.h
#pragma once
#include "capacity.h"

namespace MoveLibrary
{
    inline capacity Pound = capacity("Pound", 40, 35, MoveCategory::Physical, {EffectType::Attack});
    //inline capacity Tackle = capacity("Tackle", 40, 35, MoveCategory::Physical, {EffectType::Attack});
    inline capacity TakeDown = capacity("Take Down", 90, 20, MoveCategory::Physical, {EffectType::Attack});
    inline capacity VineWhip = capacity("Vine Whip", 45, 25, MoveCategory::Physical, {EffectType::Attack});
    //inline capacity RazorLeaf = capacity("Razor Leaf", 55, 25, MoveCategory::Physical, {EffectType::Attack});
    inline capacity Bite = capacity("Bite", 60, 25, MoveCategory::Physical, {EffectType::Attack});
    //inline capacity RockSmash = capacity("Rock Smash", 40, 15, MoveCategory::Physical, {EffectType::Attack});

    inline capacity Recover = capacity("Recover", 0, 5, MoveCategory::Status, {EffectType::Heal});
    //inline capacity Synthesis = capacity("Synthesis", 0, 5, MoveCategory::Status, {EffectType::Heal});

    inline capacity SwordDance = capacity("Sword Dance", 0, 20, MoveCategory::Status, {EffectType::Buff});
    //inline capacity Growth = capacity("Growth", 0, 20, MoveCategory::Status, {EffectType::Buff});
    //inline capacity WorkUp = capacity("Work Up", 0, 30, MoveCategory::Status, {EffectType::Buff});

    // Set additional properties directly
    inline void setupSpecialMoves()
    {
        Recover.setHealPercent(50);
        //Synthesis.setHealPercent(50);

        SwordDance.setStatModifiers(StatType::Strength, 2);
        //Growth.setStatModifiers(StatType::Strength, 1);
        //WorkUp.setStatModifiers(StatType::Strength, 1);
    }
}


#endif // MOVELIBRARY_H
