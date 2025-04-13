#ifndef BATTLE_H
#define BATTLE_H

#include "entity.h"
#include "capacity.h"

class Battle {
protected:
    Entity *player;
    Entity *opponent;

public:
    Battle(Entity *player, Entity *opponent) : player(player), opponent(opponent) {}

    Entity *getPlayer() const { return player; }
    void setPlayer(Entity *player) { this->player = player; }

    Entity *getOpponent() const { return opponent; }
    void setOpponent(Entity *opponent) { this->opponent = opponent; }

    // Utility
    static int genRandom(int from, int upto);
    static void checkAttackOrder(Entity* player, Entity* opponent);

    // Combat core
    static int calculateDamage(Entity* attacker, Entity* defender, const capacity* attack);
    static int newAttack(Entity* attacker, Entity* defender, const capacity* attack);

    struct EffectResult {
        int damageDealt = 0;
        int hpHealed = 0;
    };

    // Effects (extension)
    static int healEffect(Entity* target, const capacity* healingMove);
    //static void applyEffect(Entity* user, Entity* target, const capacity* move);
    static EffectResult applyEffect(Entity* user, Entity* target, const capacity* move);

};

#endif // BATTLE_H
