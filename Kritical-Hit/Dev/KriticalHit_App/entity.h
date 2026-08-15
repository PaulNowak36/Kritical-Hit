#ifndef ENTITY_H
#define ENTITY_H
#include<string>
#include <array>
#include "capacity.h"

class Entity {

protected:
    std::string _name;
    std::vector<int> _baseStats = {0, 0, 0, 0}; // [0]=HP, [1]=strength, [2]=defence, [3]=speed
    int _health;
    int _maxHealth;
    int _strength;
    int _defence;
    int _speed;
    int _level;

    std::array<capacity, 4> _skillList;

    int _attackOrder;
    int _statStages[3] = { 0, 0, 0 }; // index 0 = Strength, 1 = Defence, 2 = Speed

public:
    Entity();
    Entity(const std::string, int, const std::vector<int>&, const std::array<capacity, 4>&, int);

    // --- Setters ---
    void setName(std::string);
    void setHealth(int);
    void setMaxHealth(int);
    void setBaseStats(int, int, int, int);
    void setStrength(int);
    void setDefence(int);
    void setSpeed(int);
    void setLevel(int);
    void setStatStage(StatType, int);
    void setSkill(const capacity&);
    void setNewSkill(int index, const capacity& skill);
    void setSkillList(const std::array<capacity, 4>& moveList);
    void setAttackOrder(int);

    // --- Getters ---
    std::string getName();
    int getHealth();
    int getMaxHealth();
    std::vector<int> getBaseStats() const;
    int getStrength();
    int getDefence();
    int getSpeed();
    int getLevel();
    int getStatStage(StatType) const;
    capacity& getNewSkill(int);
    const std::array<capacity, 4>& getSkillList() const;
    int getAttackOrder();

    // --- Utility ---
    void checkHealth();

    static int genRandom(int from, int upto)
    {
        return (rand() % (upto - from + 1)) + from;
    }


};

#endif // ENTITY_H
