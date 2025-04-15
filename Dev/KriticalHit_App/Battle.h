#ifndef BATTLE_H
#define BATTLE_H

#include "entity.h"
#include "capacity.h"

class Battle {

public:
    enum class BattleState {
        WaitingForPlayer,
        Animating,
        Finished
    };

protected:
    Entity *player;
    Entity *opponent;
    int turn = 1; // New turn variable
    BattleState state = BattleState::WaitingForPlayer;  

public:
    Battle(Entity *player, Entity *opponent) : player(player), opponent(opponent) {}

    Entity *getPlayer() const { return player; }
    void setPlayer(Entity *player) { this->player = player; }

    Entity *getOpponent() const { return opponent; }
    void setOpponent(Entity *opponent) { this->opponent = opponent; }

    int getTurn() const { return turn; }           // Getter for turn
    void setTurn(int newTurn) { turn = newTurn; }  // Setter for turn

    BattleState getState() const;
    void setState(BattleState newState) { state = newState; }

    // Utility
    static int genRandom(int from, int upto);
    static void checkAttackOrder(Entity* player, Entity* opponent);
    void nextTurn();  // Increments the turn count
    void performTurn();
    void endBattle();

    // Combat core
    static int calculateDamage(Entity* attacker, Entity* defender, const capacity* attack);
    static int newAttack(Entity* attacker, Entity* defender, const capacity* attack);

    struct EffectResult {
        int damageDealt = 0;
        int hpHealed = 0;
    };

    EffectResult performMove(Entity* attacker, Entity* defender, int attackIndex);

    // Effects (extension)
    static int healEffect(Entity* target, const capacity* healingMove);
    static EffectResult applyEffect(Entity* user, Entity* target, const capacity* move);
};

#endif // BATTLE_H
