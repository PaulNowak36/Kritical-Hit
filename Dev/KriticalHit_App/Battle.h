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
};


#endif // BATTLE_H
