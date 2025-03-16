#include "entity.h"
#include<string>

Entity::Entity()
{
    setLevel(10);
    setHealth(30);
    setMaxHealth(30);
    setStrength(26);
    setDefence(24);
    setSpeed(25);
    setName("newMon");
    setSkill(capacity());
}

Entity::Entity(std::string name, int level, int health, int maxHealth, int strength, int defence, int speed, const capacity& skill1)
    : _name(name), _health(health), _maxHealth(maxHealth), _strength(strength), _defence(defence), _speed(speed), _level(level), _skill(skill1) {}

void Entity::setName(std::string name)      {_name = name;}
void Entity::setLevel(int artLevel)       {_level = artLevel;}
void Entity::setHealth(int artHealth)       {_health = artHealth;}
void Entity::setMaxHealth(int artMaxHealth) {_maxHealth = artMaxHealth;}
void Entity::setStrength(int artDamage)     {_strength = artDamage;}
void Entity::setDefence(int artShield)       {_defence = artShield;}
void Entity::setSpeed(int artSwift)       {_speed = artSwift;}
void Entity::setSkill(const capacity&  artSkill)       {_skill = artSkill;}

void Entity::checkHealth()
{
    if(getHealth() > getMaxHealth())
    {
        setHealth(getMaxHealth());
    }
    else if(getHealth() < 0)
    {
        setHealth(0);
    }
}
int Entity::getLevel()             {return _level;}
int Entity::getHealth()             {return _health;}
int Entity::getMaxHealth()          {return _maxHealth;}
int Entity::getStrength()           {return _strength;}
int Entity::getDefence()            {return _defence;}
int Entity::getSpeed()            {return _speed;}
capacity Entity::getSkill()        {return _skill;}
std::string Entity::getName()       {return _name;}
