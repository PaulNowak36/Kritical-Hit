#ifndef SETUP_H
#define SETUP_H

#include <array>
#include <vector>
#include <string>
#include "capacity.h"
#include "Entity.h"
#include "moveLibrary.h"
#include "database.h"

class Setup
{
public:
    Setup();
    std::array<capacity, 4> getMoveset();
    Entity* getPlayer();
    Entity* getOpponent();
    bool getPPRule();


private:
    std::array<capacity, 4> moveset;
    void initializeMoveset();
    void filterMoveset();
    bool healTrue;
    bool buffTrue;
    bool PPTrue;
};


#endif // SETUP_H
