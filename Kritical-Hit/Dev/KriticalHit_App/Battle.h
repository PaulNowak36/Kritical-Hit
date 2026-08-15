#ifndef BATTLE_H
#define BATTLE_H

#include "entity.h"
#include "capacity.h"
#include <random>

class Battle {

public:
    // Used to differentiate each phase during battle
    enum class BattleState {
        Start,
        WaitingForPlayer,
        Animating,
        Finished
    };

protected:
    Entity *player;
    Entity *opponent;
    int turn = 1; // Turn system that always starts at 1
    BattleState state = BattleState::Start;

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
    void battleBegin();
    void nextTurn();  // Increments the turn count
    void performTurn();
    void endBattle();

    // Combat core
    static int calculateDamage(Entity* attacker, Entity* defender, const capacity* attack);
    static int newAttack(Entity* attacker, Entity* defender, const capacity* attack);
    static double getStatMultiplier(int);

    // Struct used to gather the results after a capacity hit a target
    struct EffectResult {
        int damageDealt = 0;
        int hpHealed = 0;
        short int attackBoost = 0;
        short int defenceBoost = 0;
        short int speedBoost = 0;
    };

    EffectResult performMove(Entity*, Entity*, int);
    //EffectResult performMoveAI(Entity*, Entity*);
    int randomMoveIndex();

    // Effects (extension)
    static int healEffect(Entity* target, const capacity* healingMove);
    static EffectResult applyEffect(Entity* user, Entity* target, const capacity* move);
    static EffectResult applyStatModifiers(Entity* target, const std::vector<StatModifier>& mods);

};

#endif // BATTLE_H
