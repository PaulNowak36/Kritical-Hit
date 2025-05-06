#include "capacity.h"
#include <iostream>

capacity::capacity() : _attackName(""), _attackPower(0), _powerPoints(40), _category(MoveCategory::Physical), _healPercent(0), _buffAmount(0), _debuffAmount(0) {}

/*capacity::capacity(std::string name, int power, MoveCategory category, std::vector<EffectType> effects)
    : _attackName(name), _attackPower(power), _category(category), _effects(effects), _healPercent(0), _buffAmount(0), _debuffAmount(0) {}*/

capacity::capacity(const std::string name, int power, int PP, MoveCategory category, const std::vector<EffectType> effects)
    : _attackName(name), _attackPower(power), _powerPoints(PP), _maxPowerPoints(PP), _category(category), _effects(effects), _healPercent(0), _buffAmount(0), _debuffAmount(0) {}


void capacity::setAttackName(std::string name) { _attackName = name; }
void capacity::setAttackPower(int power) { _attackPower = power; }
void capacity::setPowerPoints(int points) { _powerPoints = points; }
void capacity::setMaxPowerPoints(int maxPoints) { _maxPowerPoints = maxPoints; }

void capacity::setCategory(MoveCategory category) { _category = category; }
void capacity::setEffects(std::vector<EffectType> effects) { _effects = effects; }
void capacity::setHealPercent(int percent) { _healPercent = percent; }
void capacity::setBuffAmount(int amount) { _buffAmount = amount; }
void capacity::setDebuffAmount(int amount) { _debuffAmount = amount; }

void capacity::setStatModifiers(StatType stat, int amount) {
    _statModifiers.clear(); // Wipe out previous modifiers
    _statModifiers.push_back({stat, amount});
}

std::string capacity::getAttackName() const { return _attackName; }
int capacity::getAttackPower() const { return _attackPower; }
int capacity::getPowerPoints() const { return _powerPoints; }
int capacity::getMaxPowerPoints() const { return _maxPowerPoints; }

MoveCategory capacity::getCategory() { return _category; }
const std::vector<EffectType>& capacity::getEffects() const { return _effects; }
int capacity::getHealPercent() const { return _healPercent; }
int capacity::getBuffAmount() { return _buffAmount; }
int capacity::getDebuffAmount() { return _debuffAmount; }
const std::vector<StatModifier>& capacity::getStatModifiers() const { return _statModifiers; }

// New getter implementation
StatModifier capacity::getStatModifier(size_t index) const {
    if (index < _statModifiers.size()) {
        return _statModifiers[index];
    } else {
        // Handle out-of-bounds access (e.g., return a default value or throw an exception)
        std::cerr << "Error: StatModifier index out of bounds!" << std::endl;
        return {StatType::Strength, 0}; // Return a default StatModifier
    }
}

// Debug function implementation
void capacity::printStatModifiers() const {
    for (size_t i = 0; i < _statModifiers.size(); ++i) {
        std::cout << "StatModifier " << i + 1 << ":" << std::endl;
        std::cout << "  Stat = " << statTypeToString(_statModifiers[i].stat) << std::endl;
        std::cout << "  Amount = " << _statModifiers[i].amount << std::endl;
    }
}

// Helper function implementation
std::string capacity::statTypeToString(StatType stat) const {
    switch (stat) {
    case StatType::Strength: return "Strength";
    case StatType::Defence: return "Defence";
    case StatType::Speed: return "Speed";
    default: return "unknown";
    }
}


std::string capacity::getEffectString() const {
    std::string effectString;
    for (size_t i = 0; i < _effects.size(); ++i) {
        // You'll need a way to convert EffectType to a string here
        // For example, using a switch statement or a lookup table
        // effectString += effectTypeToString(_effects[i]);
        if (i < _effects.size() - 1) {
            effectString += ", ";
        }
    }
    return effectString;
}

std::vector<int> capacity::getStatChangeSummary() const {
    // Initialize the vector with 0s for each StatType
    std::vector<int> summary(3, 0); // Index 0 = Strength, 1 = Defence, 2 = Speed

    for (const auto& modifier : _statModifiers) {
        switch (modifier.stat) {
        case StatType::Strength:
            summary[0] += modifier.amount;
            break;
        case StatType::Defence:
            summary[1] += modifier.amount;
            break;
        case StatType::Speed:
            summary[2] += modifier.amount;
            break;
        }
    }

    return summary;
}

bool capacity::useCapacity() {
    if (_powerPoints > 0) {
        _powerPoints--;
        return true;
    } else {
        std::cout << _attackName << " has no PP left!\n"; // Optional debug
        return false;
    }
}



// Example usage in SimulationMenu.cpp (or wherever you need to debug)
// In SimulationMenu::initializeBattle() or another relevant function:
// After creating the attack4 object:
// attack4->printStatModifiers();

// In SimulationMenu::someOtherFunction() where you want to access a specific StatModifier:
// StatModifier modifier = attack4->getStatModifier(0); // Get the first modifier
// qDebug() << "Stat: " << QString::fromStdString(attack4->statTypeToString(modifier.stat)) << ", Amount: " << modifier.amount;

