//OG
#include "battle.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <QDebug> // Include for qDebug()

int Battle::calculateDamage(Entity* attacker, Entity* defender, const capacity* attack) {
    double level = attacker->getLevel();
    double att = attacker->getStrength();
    double pow = attack->getAttackPower();
    double def = defender->getDefence();

    double totalDamage = (((level * 0.4 + 2) * att * pow) / (def * 50)) + 2;
    return std::max(1, static_cast<int>(totalDamage));
}

int Battle::newAttack(Entity* attacker, Entity* defender, const capacity* attack) {
    int damage = calculateDamage(attacker, defender, attack);
    defender->setHealth(defender->getHealth() - damage);

    return damage;
}

double Battle::getStatMultiplier(int stage) {
    if (stage > 6) stage = 6;
    if (stage < -6) stage = -6;

    if (stage >= 0)
        return (2.0 + stage) / 2.0;  // e.g., +1 = 3/2, +2 = 4/2 = 2.0
    else
        return 2.0 / (2.0 - stage);  // e.g., -1 = 2 / (2 + 1) = 0.66
}


Battle::EffectResult Battle::performMove(Entity* attacker, Entity* defender, int attackIndex) {
    const capacity& move = attacker->getNewSkill(attackIndex);

    qDebug() << "Attack used: " << QString::fromStdString(move.getAttackName());
    qDebug() << "Move Effect: " << QString::fromStdString(move.getEffectString());

    // Apply effect and get result (damage/heal info)
    EffectResult result = Battle::applyEffect(attacker, defender, &move);

    return result;
}

Battle::BattleState Battle::getState() const
{
    if (state == BattleState::WaitingForPlayer) {
        qDebug() << "Battle state: WaitingForPlayer";
    } else if (state == BattleState::Animating) {
        qDebug() << "Battle state: Animating";
    } else if (state == BattleState::Finished) {
        qDebug() << "Battle state: Finished";
    } else {
        qDebug() << "Battle state: Unknown";
    }

    return state;
}

int Battle::genRandom(int from, int upto) {
    int result = (rand() % (upto - from + 1)) + from;
    qDebug() << "Generated random value: " << result;
    return result;
}

void Battle::checkAttackOrder(Entity* player, Entity* opponent) {
    if (player->getSpeed() > opponent->getSpeed()) {
        player->setAttackOrder(0);
        opponent->setAttackOrder(1);
    } else if (player->getSpeed() < opponent->getSpeed()) {
        player->setAttackOrder(1);
        opponent->setAttackOrder(0);
    } else {
        bool playerFirst = Battle::genRandom(0, 1);
        player->setAttackOrder(playerFirst ? 0 : 1);
        opponent->setAttackOrder(playerFirst ? 1 : 0);
    }
}

void Battle::battleBegin()
{
    if (state == BattleState::Start) {
        state = BattleState::WaitingForPlayer;
        qDebug() << "State changed: Start → WaitingForPlayer";
    }
}

// Move to Animating when a turn is being performed
void Battle::performTurn() {
    if (state == BattleState::WaitingForPlayer) {
        state = BattleState::Animating;
        qDebug() << "State changed: WaitingForPlayer → Animating";
    }
}

// Move to Finished when battle ends
void Battle::endBattle() {
    if (state == BattleState::Animating) {
        state = BattleState::Finished;
        qDebug() << "State changed: Animating → Finished";
    }
}

// After animations (e.g. attacks), move to next turn and wait for player again
void Battle::nextTurn() {
    if (state == BattleState::Animating) {
        ++turn;
        state = BattleState::WaitingForPlayer;
        qDebug() << "Turn advanced to:" << turn << " | State changed: Animating → WaitingForPlayer";
    }
}

int Battle::healEffect(Entity* target, const capacity* healingMove) {
    int healPercent = healingMove->getHealPercent();
    int maxHP = target->getMaxHealth();
    int current = target->getHealth();
    int amount = (maxHP * healPercent) / 100;

    int newHP = std::min(current + amount, maxHP);
    int healed = newHP - current;
    target->setHealth(newHP);

    qDebug() << target->getName() << " healed for " << healed << " HP!"
             << " Total HP = " << newHP;

    return healed;
}


Battle::EffectResult Battle::applyStatModifiers(Entity* target, const std::vector<StatModifier>& mods) {
    EffectResult result;

    for (const auto& mod : mods) {
        StatType stat = mod.stat;
        int originalStage = target->getStatStage(stat);
        int newStage = originalStage + mod.amount;

        // Clamp between -6 and 6
        if (newStage > 6) newStage = 6;
        if (newStage < -6) newStage = -6;

        target->setStatStage(stat, newStage);
        double multiplier = getStatMultiplier(newStage);

        switch (stat) {
        case StatType::Strength:
            result.attackBoost = newStage - originalStage;
            //target->setStrength(static_cast<int>(target->getStrength() * multiplier));
            target->setStrength(static_cast<int>(target->getBaseStats()[1] * multiplier));
            qDebug() << "New Strength =" << target->getStrength();
            break;
        case StatType::Defence:
            result.defenceBoost = newStage - originalStage;
            //target->setDefence(static_cast<int>(target->getDefence() * multiplier));
            target->setDefence(static_cast<int>(target->getBaseStats()[2] * multiplier));
            break;
        case StatType::Speed:
            result.speedBoost = newStage - originalStage;
            //target->setSpeed(static_cast<int>(target->getSpeed() * multiplier));
            target->setSpeed(static_cast<int>(target->getBaseStats()[3] * multiplier));
            break;
        }
    }

    return result;
}



Battle::EffectResult Battle::applyEffect(Entity* user, Entity* target, const capacity* move) {
    EffectResult result;

    for (EffectType effect : move->getEffects()) {
        switch (effect) {
        case EffectType::Attack:
            qDebug() << "Applying Attack effect...";
            result.damageDealt += Battle::newAttack(user, target, move);
            break;

        case EffectType::Heal:
            qDebug() << "Applying Heal effect...";
            result.hpHealed += Battle::healEffect(user, move);
            break;

        case EffectType::Buff:
            qDebug() << "Applying Buff effect...";
            {
                EffectResult buffResult = Battle::applyStatModifiers(user, move->getStatModifiers());
                result.attackBoost += buffResult.attackBoost;
                result.defenceBoost += buffResult.defenceBoost;
                result.speedBoost += buffResult.speedBoost;
            }
            break;

        default:
            qDebug() << "Effect not handled yet.";
        }
    }

    return result;
}




