// CAPACITY.H
#ifndef CAPACITY_H
#define CAPACITY_H

#include <string>
#include <vector>
#include <iostream> // Include for debugging

// Type of move, defines how it's calculated
enum class MoveCategory {
    Physical,
    Special,
    Status
};

// Type of effect the move has (damage, buff, etc.)
enum class EffectType {
    Attack,
    Buff,
    Debuff,
    Heal
};

// Stats that can be modified
enum class StatType {
    Strength,
    Defence,
    Speed
};

// Struct representing a single stat change (positive or negative)
struct StatModifier {
    StatType stat;
    int amount;  // Positive for buff, negative for debuff
};

class capacity {
protected:
    std::string _attackName;
    int _attackPower; // Damage value, not used for healing
    int _powerPoints; // Remaining uses of this move
    int _maxPowerPoints; // Maximum possible uses
    MoveCategory _category;
    std::vector<EffectType> _effects;

    // Optional effect-specific parameters
    int _healPercent;                  // Only for healing-type moves
    int _buffAmount;                   // Used if move applies a buff
    int _debuffAmount;                 // Used if move applies a debuff
    std::vector<StatModifier> _statModifiers;

public:
    // Default constructor
    capacity();

    // Full constructor with all core attributes
    capacity(const std::string name, int power, int PP, MoveCategory category, const std::vector<EffectType> effects);

    // --- Setters ---

    // Sets the name of the move
    void setAttackName(std::string);

    // Sets the damage value
    void setAttackPower(int);

    // Sets remaining PP (uses)
    void setPowerPoints(int);

    // Sets max PP
    void setMaxPowerPoints(int);

    // Sets the move's category (Physical/Special/Status)
    void setCategory(MoveCategory);

    // Sets the effect types (Attack, Buff, etc.)
    void setEffects(std::vector<EffectType>);

    // Sets healing percentage (only used for healing moves)
    void setHealPercent(int);

    // Sets the buff amount (positive or negative)
    void setBuffAmount(int);

    // Sets the debuff amount (positive or negative)
    void setDebuffAmount(int);

    // Adds a new stat modifier to the move
    void setStatModifiers(StatType stat, int amount);

    // --- Getters ---

    // Returns move name
    std::string getAttackName() const;

    // Returns base damage value
    int getAttackPower() const;

    // Returns current power points
    int getPowerPoints() const;

    // Returns max power points
    int getMaxPowerPoints() const;

    // Returns move category
    MoveCategory getCategory();

    // Returns all effects applied by this move
    const std::vector<EffectType>& getEffects() const;

    // Returns the percent heal amount
    int getHealPercent() const;

    // Returns buff amount
    int getBuffAmount();

    // Returns debuff amount
    int getDebuffAmount();

    // Returns all stat modifiers
    const std::vector<StatModifier>& getStatModifiers() const;

    // Returns a specific stat modifier by index
    StatModifier getStatModifier(size_t index) const;

    // --- Debugging and Utilities ---

    // Prints all stat modifiers to console (for debugging)
    void printStatModifiers() const;

    // Converts a StatType to human-readable string
    std::string statTypeToString(StatType stat) const;

    // Converts effects to a readable string (e.g. "Attack + Buff")
    std::string getEffectString() const;

    // Summarizes stat changes in a vector format
    std::vector<int> getStatChangeSummary() const;

    // Attempts to use the move (consumes 1 PP if available)
    bool useCapacity();
};

#endif // CAPACITY_H
