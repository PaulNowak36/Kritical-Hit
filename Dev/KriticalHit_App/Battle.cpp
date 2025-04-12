#include "battle.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>

int Battle::getDamage(Entity* attacker, Entity* defender) {
    int damage = (attacker->getStrength() * attacker->getStrength()) /
                 (attacker->getStrength() * defender->getDefence());

    return std::max(1, damage);
}

int Battle::calculateDamage(Entity* attacker, Entity* defender, capacity* attack) {
    double level = attacker->getLevel();
    double att = attacker->getStrength();
    double pow = attack->getAttackPower();
    double def = defender->getDefence();

    double totalDamage = (((level * 0.4 + 2) * att * pow) / (def * 50)) + 2;

    return std::max(1, static_cast<int>(totalDamage));
}

void Battle::attack(Entity* attacker, Entity* defender) {
    defender->setHealth(defender->getHealth() - getDamage(attacker, defender));
}

int Battle::newAttack(Entity* attacker, Entity* defender, capacity* attack) {
    int damage = calculateDamage(attacker, defender, attack);
    defender->setHealth(defender->getHealth() - damage);

    std::cout << attacker->getName() << " used " << attack->getAttackName()
              << " and dealt " << damage << " damage!\n";

    return damage;
}

int Battle::genRandom(int from, int upto) {
    return (rand() % (upto - from + 1)) + from;
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

int Battle::healEffect(Entity* target, capacity* healingMove) {
    int healPercent = healingMove->getHealPercent();
    int maxHP = target->getMaxHealth();
    int current = target->getHealth();
    int amount = (maxHP * healPercent) / 100;

    int newHP = std::min(current + amount, maxHP);
    int healed = newHP - current;
    target->setHealth(newHP);

    std::cout << target->getName() << " healed for " << healed << " HP!\n";
    return healed;
}

void Battle::applyEffect(Entity* user, Entity* target, capacity* move) {
    for (EffectType effect : move->getEffects()) {
        switch (effect) {
        case EffectType::Attack:
            Battle::newAttack(user, target, move);
            break;
        case EffectType::Heal:
            Battle::healEffect(user, move);
            break;
        // Buff/Debuff can be added here
        default:
            std::cout << "Effect not handled yet.\n";
        }
    }
}
