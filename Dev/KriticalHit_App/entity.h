#ifndef ENTITY_H
#define ENTITY_H
#include<string>
#include <array>
#include "capacity.h"

class Entity {

protected:
    std::string _name;
    int _health;
    int _maxHealth;
    int _strength;
    int _defence;
    int _speed;
    int _level;

    capacity _skill;
    std::array<capacity, 4> _skillList;

    int attackOrder;

public:
    Entity();
    Entity(std::string, int, int, int, int, int, int, const capacity&, const std::array<capacity, 4>&);

    void    setName(std::string);
    std::string  getName();
    void    setHealth(int);
    int     getHealth();
    void    setMaxHealth(int);
    int     getMaxHealth();
    void    setStrength(int);
    int     getStrength();
    void    setDefence(int);
    int     getDefence();
    void    setSpeed(int);
    int     getSpeed();
    void    setLevel(int);
    int     getLevel();
    void setSkill(const capacity&);
    void setNewSkill(int index, const capacity& skill);
    capacity& getSkill();
    capacity& getNewSkill(int);
    void setSkillList(const std::array<capacity, 4>& moveList);
    const std::array<capacity, 4>& getSkillList() const;


    void    checkHealth();

    static int genRandom(int from, int upto)
    {
        return (rand() % (upto - from + 1)) + from;
    }

    void setAttackOrder(int);
    int getAttackOrder();

};

#endif // ENTITY_H
