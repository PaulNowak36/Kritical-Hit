#include "capacity.h"

capacity::capacity() : _attackName(""), _attackPower(0), _category(MoveCategory::Physical),
    _healPercent(0), _buffAmount(0), _debuffAmount(0) {}

capacity::capacity(std::string name, int power, MoveCategory category, std::vector<EffectType> effects)
    : _attackName(name), _attackPower(power), _category(category), _effects(effects),
    _healPercent(0), _buffAmount(0), _debuffAmount(0) {}

void capacity::setAttackName(std::string name) { _attackName = name; }
void capacity::setAttackPower(int power) { _attackPower = power; }
void capacity::setCategory(MoveCategory category) { _category = category; }
void capacity::setEffects(std::vector<EffectType> effects) { _effects = effects; }
void capacity::setHealPercent(int percent) { _healPercent = percent; }
void capacity::setBuffAmount(int amount) { _buffAmount = amount; }
void capacity::setDebuffAmount(int amount) { _debuffAmount = amount; }

std::string capacity::getAttackName() { return _attackName; }
int capacity::getAttackPower() { return _attackPower; }
MoveCategory capacity::getCategory() { return _category; }
const std::vector<EffectType>& capacity::getEffects() { return _effects; }
int capacity::getHealPercent() { return _healPercent; }
int capacity::getBuffAmount() { return _buffAmount; }
int capacity::getDebuffAmount() { return _debuffAmount; }
