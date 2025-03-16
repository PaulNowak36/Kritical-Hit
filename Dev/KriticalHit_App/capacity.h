#ifndef CAPACITY_H
#define CAPACITY_H
#include<string>

class capacity
{

protected:
    std::string _attackName;
    int _attackPower;

public:
    capacity();
    capacity(std::string, int);

    void setAttackName(std::string);
    void setAttackPower(int);
    std::string getAttackName();
    int getAttackPower();
};

#endif // CAPACITY_H
