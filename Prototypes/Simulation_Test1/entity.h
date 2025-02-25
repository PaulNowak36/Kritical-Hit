#ifndef ENTITY_H
#define ENTITY_H
#include<string>

class Entity {

protected:
    std::string _name;
    int _health;
    int _maxHealth;
    int _strength;
    int _defence;

public:
    Entity();
    Entity(std::string, int ,int ,int, int);

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

};

#endif // ENTITY_H
