#ifndef BATTLE_H
#define BATTLE_H
#include "entity.h"
#include "capacity.h"

class Battle {
protected:
    Entity *player;
    Entity *opponent;
public:
    Battle(Entity *player, Entity *opponent) : player(player), opponent(opponent) {};

    Entity *getPlayer() const {
        return player;
    }

    void setPlayer(Entity *player) {
        this->player = player;
    }

    Entity *getOpponent() const {
        return opponent;
    }

    void setOpponent(Entity *opponent) {
        this->opponent = opponent;
    }
    static int getDamage(Entity* attacker, Entity* defender){
        int damage = (attacker->getStrength() * attacker->getStrength()) / (attacker->getStrength() * defender->getDefence());
        if (damage > 1) {
            return damage;
        }
        else
            return 1;
    }

    static int calculateDamage(Entity* attacker, Entity* defender, capacity* attack) {
        double level = attacker->getLevel();
        double att = attacker->getStrength();
        double pow = attack->getAttackPower();
        double def = defender->getDefence();

        // Corrected formula with explicit floating-point arithmetic
        double totalDamage = (((level * 0.4 + 2) * att * pow) / (def * 50)) + 2;

        // Ensuring minimum damage of 1
        return std::max(1, static_cast<int>(totalDamage));
    }


    static void attack(Entity* attacker, Entity* defender)
    {
        defender->setHealth(defender->getHealth() - getDamage(attacker,defender));
    }

    static int newAttack(Entity* attacker, Entity* defender, capacity* attack)
    {
        int damage = calculateDamage(attacker, defender, attack);
        defender->setHealth(defender->getHealth() - damage);
        return damage;  // Return the total damage dealt
    }

    static int genRandom(int from, int upto)
    {
        return (rand() % (upto - from + 1)) + from;
    }

    static void checkAttackOrder(Entity* player, Entity* opponent)
    {
        // When player is faster than opponent
        if (player->getSpeed() > opponent->getSpeed()) {
            player->setAttackOrder(0);
            opponent->setAttackOrder(1);
        } // When opponent is faster than player
        else if (player->getSpeed() < opponent->getSpeed()) {
            player->setAttackOrder(1);
            opponent->setAttackOrder(0);
        }
        else { // Speeds are equal, decide randomly
            bool playerFirst = Battle::genRandom(0, 1);
            player->setAttackOrder(playerFirst ? 0 : 1);
            opponent->setAttackOrder(playerFirst ? 1 : 0);
        }
    }

};


#endif // BATTLE_H
