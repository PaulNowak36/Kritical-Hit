#include "entity.h"
#include <string>
#include <stdexcept>

// --- Constructors ---
Entity::Entity()
{
    setLevel(10);
    setBaseStats(30, 26, 24, 25);
    setMaxHealth(_baseStats[0]);
    setHealth(_baseStats[0]);
    setStrength(_baseStats[1]);
    setDefence(_baseStats[2]);
    setSpeed(_baseStats[3]);
    setName("newMon");

    std::array<capacity, 4> skills = {capacity(), capacity()};
    setSkillList(skills);
    setAttackOrder(0);
}

Entity::Entity(const std::string name, int level, const std::vector<int>& baseStats, const std::array<capacity, 4>& moves, int order)
    : _name(name), _baseStats(baseStats), _level(level), _skillList(moves), _attackOrder(order)
{
    // Copy base stats into battle stats
    if (_baseStats.size() >= 4) {
        _maxHealth = _baseStats[0];
        _health = _baseStats[0];
        _strength = _baseStats[1];
        _defence = _baseStats[2];
        _speed = _baseStats[3];
    } else {
        // Optional: handle case where baseStats vector is too small
        _strength = _defence = _speed = 10;
    }

}

// --- Setters ---
void Entity::setName(std::string name)                     { _name = name; }
void Entity::setLevel(int artLevel)                        { _level = artLevel; }
void Entity::setHealth(int artHealth)                      { _health = artHealth; }
void Entity::setMaxHealth(int artMaxHealth)                { _maxHealth = artMaxHealth; }

void Entity::setBaseStats(int health, int strength, int defence, int speed) {
    _baseStats[0] = health;
    _baseStats[1] = strength;
    _baseStats[2] = defence;
    _baseStats[3] = speed;
}


void Entity::setStrength(int artDamage)                    { _strength = artDamage; }
void Entity::setDefence(int artShield)                     { _defence = artShield; }
void Entity::setSpeed(int artSwift)                        { _speed = artSwift; }
void Entity::setNewSkill(int index, const capacity& skill)
{
    if (index >= 0 && index < 4) {
        _skillList[index] = skill;
    }
}
void Entity::setSkillList(const std::array<capacity, 4>& moveList) { _skillList = moveList; }
void Entity::setAttackOrder(int turnOrder)                        { _attackOrder = turnOrder; }
void Entity::setStatStage(StatType stat, int stage)
{
    if (stage > 6) stage = 6;
    if (stage < -6) stage = -6;
    _statStages[static_cast<int>(stat)] = stage;
}


// --- Getters ---
std::string Entity::getName()                 { return _name; }
int Entity::getLevel()                        { return _level; }
int Entity::getHealth()                       { return _health; }
int Entity::getMaxHealth()                    { return _maxHealth; }

std::vector<int> Entity::getBaseStats() const {
    return _baseStats;
}

int Entity::getStrength()                     { return _strength; }
int Entity::getDefence()                      { return _defence; }
int Entity::getSpeed()                        { return _speed; }
capacity& Entity::getNewSkill(int index)
{
    if (index >= 0 && index < 4) {
        return _skillList[index];
    }
    throw std::out_of_range("Index out of bounds");
}
const std::array<capacity, 4>& Entity::getSkillList() const { return _skillList; }
int Entity::getAttackOrder()              { return _attackOrder; }
int Entity::getStatStage(StatType stat) const { return _statStages[static_cast<int>(stat)]; }


// --- Utility ---
void Entity::checkHealth()
{
    if (getHealth() > getMaxHealth()) {
        setHealth(getMaxHealth());
    } else if (getHealth() < 0) {
        setHealth(0);
    }
}
