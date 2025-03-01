#ifndef BATTLE_H
#define BATTLE_H
#include "entity.h"

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

    static void attack(Entity* attacker, Entity* defender)
    {
        defender->setHealth(defender->getHealth() - getDamage(attacker,defender));
    }
};


#endif // BATTLE_H
