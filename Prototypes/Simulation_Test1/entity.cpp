#include "entity.h"
#include<string>

Entity::Entity()
{
    setHealth(0);
    setMaxHealth(0);
    setStrength(0);
    setDefence(0);
    setName("");

}

Entity::Entity(std::string name, int health, int maxHealth, int strength, int defence)
    : _name(name), _health(health), _maxHealth(maxHealth), _strength(strength), _defence(defence) {}

void Entity::setDefence(int artLevel)       {_defence = artLevel;}
void Entity::setHealth(int artHealth)       {_health = artHealth;}
void Entity::setMaxHealth(int artMaxHealth) {_maxHealth = artMaxHealth;}
void Entity::setStrength(int artDamage)     {_strength = artDamage;}
void Entity::setName(std::string name)      {_name = name;}

int Entity::getDefence()            {return _defence;}
int Entity::getHealth()             {return _health;}
int Entity::getMaxHealth()          {return _maxHealth;}
int Entity::getStrength()           {return _strength;}
std::string Entity::getName()       {return _name;}
