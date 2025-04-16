#ifndef CAPACITY_H
#define CAPACITY_H

#include <string>
#include <vector>

enum class MoveCategory {
    Physical,
    Special,
    Status
};

enum class EffectType {
    Attack,
    Buff,
    Debuff,
    Heal
};

enum class StatType {
    Strength,
    Defence,
    Speed
};

struct StatModifier {
    StatType stat;
    int amount;  // Positive for buff, negative for debuff
};

class capacity {
protected:
    std::string _attackName;
    int _attackPower; // Damage for attacks, not used for healing
    MoveCategory _category;
    std::vector<EffectType> _effects;

    // Optional parameters depending on the effect type
    int _healPercent;      // Only for Heal moves, e.g., 50 = heal 50% of maxHP
    int _buffAmount;       // Buff value (positive or negative)
    int _debuffAmount;     // Debuff value
    std::vector<StatModifier> _statModifiers;

public:
    capacity();
    capacity(std::string name, int power, MoveCategory category, std::vector<EffectType> effects);

    // Setters
    void setAttackName(std::string);
    void setAttackPower(int);
    void setCategory(MoveCategory);
    void setEffects(std::vector<EffectType>);
    void setHealPercent(int);
    void setBuffAmount(int);
    void setDebuffAmount(int);
    void setStatModifiers(StatType stat, int amount);

    // Getters
    //std::string getAttackName();
    std::string getAttackName() const;
    int getAttackPower() const;
    MoveCategory getCategory();
    const std::vector<EffectType>& getEffects() const;
    int getHealPercent() const;
    int getBuffAmount();
    int getDebuffAmount();
    const std::vector<StatModifier>& getStatModifiers() const;

    //static std::string effectTypeToString(EffectType effect);
    std::string getEffectString() const;

};

#endif // CAPACITY_H
