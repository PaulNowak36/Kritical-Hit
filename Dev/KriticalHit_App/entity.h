#ifndef ENTITY_H
#define ENTITY_H
#include<string>
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


public:
    Entity();
    Entity(std::string, int, int, int, int, int, int, const capacity&);

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
    capacity& getSkill();
    void setSkill(const capacity&);

    void    checkHealth();

    static int genRandom(int from, int upto)
    {
        return (rand() % (upto - from + 1)) + from;
    }

};

#endif // ENTITY_H
