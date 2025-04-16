#include "entity.h"
#include<string>
#include <stdexcept>

Entity::Entity()
{
    setLevel(10);
    setHealth(30);
    setMaxHealth(30);
    setStrength(26);
    setDefence(24);
    setSpeed(25);
    setName("newMon");
    //setSkill(capacity());

    std::array<capacity, 4> skills = {capacity(), capacity()};
    setSkillList(skills);
    setAttackOrder(0);
}

/*Entity::Entity(std::string name, int level, int health, int maxHealth, int strength, int defence, int speed, const capacity& skill1, const std::array<capacity, 4>& moves, int order)
    : _name(name), _health(health), _maxHealth(maxHealth), _strength(strength), _defence(defence), _speed(speed), _level(level), _skill(skill1), _skillList(moves), _attackOrder(order) {}
*/
Entity::Entity(std::string name, int level, int health, int maxHealth, int strength, int defence, int speed, const std::array<capacity, 4>& moves, int order)
    : _name(name), _health(health), _maxHealth(maxHealth), _strength(strength), _defence(defence), _speed(speed), _level(level), _skillList(moves), _attackOrder(order) {}


void Entity::setName(std::string name)      {_name = name;}
void Entity::setLevel(int artLevel)       {_level = artLevel;}
void Entity::setHealth(int artHealth)       {_health = artHealth;}
void Entity::setMaxHealth(int artMaxHealth) {_maxHealth = artMaxHealth;}
void Entity::setStrength(int artDamage)     {_strength = artDamage;}
void Entity::setDefence(int artShield)       {_defence = artShield;}
void Entity::setSpeed(int artSwift)       {_speed = artSwift;}
//void Entity::setSkill(const capacity&  artSkill)       {_skill = artSkill;}
void Entity::setNewSkill(int index, const capacity &skill)
{
    if (index >= 0 && index < 4) {
        _skillList[index] = skill;
    }
}
void Entity::setSkillList(const std::array<capacity, 4> &moveList)  {_skillList = moveList;}

void Entity::setAttackOrder(int turnOrder)        {_attackOrder = turnOrder;}

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

// Setter for a specific stat stage
void Entity::setStatStage(StatType stat, int stage) {
    if (stage > 6) stage = 6;
    if (stage < -6) stage = -6;
    _statStages[static_cast<int>(stat)] = stage;
}

// Getter for a specific stat stage
int Entity::getStatStage(StatType stat) const {
    return _statStages[static_cast<int>(stat)];
}

int Entity::getHealth()             {return _health;}
int Entity::getMaxHealth()          {return _maxHealth;}
int Entity::getStrength()           {return _strength;}
int Entity::getDefence()            {return _defence;}
int Entity::getSpeed()            {return _speed;}
//capacity& Entity::getSkill()        {return _skill;}
capacity &Entity::getNewSkill(int index)
{
    if (index >= 0 && index < 4) {
        return _skillList[index];
    }
    throw std::out_of_range("Index out of bounds"); // Handle invalid access
}
const std::array<capacity, 4> &Entity::getSkillList() const {return _skillList;}

std::string Entity::getName()       {return _name;}
int Entity::getAttackOrder()        {return _attackOrder;}
