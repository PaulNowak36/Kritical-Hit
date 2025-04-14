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

void Battle::nextTurn() {
    ++turn;
    qDebug() << "Turn advanced to:" << turn;
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
        default:
            qDebug() << "Effect not handled yet.";
        }
    }

    return result;
}


/*void Battle::applyEffect(Entity* user, Entity* target, const capacity* move) {
    for (EffectType effect : move->getEffects()) {
        switch (effect) {
        case EffectType::Attack:
            qDebug() << "Applying Attack effect...";
            Battle::newAttack(user, target, move);
            break;
        case EffectType::Heal:
            qDebug() << "Applying Heal effect...";
            Battle::healEffect(user, move);
            break;
        // Buff/Debuff can be added here
        default:
            qDebug() << "Effect not handled yet.";
        }
    }
}*/
