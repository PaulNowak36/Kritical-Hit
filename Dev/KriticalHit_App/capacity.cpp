#include "capacity.h"

capacity::capacity()
{
    setAttackName("Tackle");
    setAttackPower(40);
}

capacity::capacity(std::string name, int power)
    : _attackName(name), _attackPower(power) {}

void capacity::setAttackName(std::string attName)      {_attackName = attName;}
void capacity::setAttackPower(int skillPower)       {_attackPower = skillPower;}

std::string capacity::getAttackName(){return _attackName;}

int capacity::getAttackPower(){return _attackPower;}
