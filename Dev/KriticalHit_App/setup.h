#ifndef SETUP_H
#define SETUP_H

#include <array>
#include <vector>
#include <string>
#include "capacity.h"
#include "Entity.h"
#include "moveLibrary.h"

class Setup
{
public:
    Setup();
    std::array<capacity, 4> getMoveset();
    Entity* getPlayer();
    Entity* getOpponent();

private:
    std::array<capacity, 4> moveset;
    void initializeMoveset();
};


#endif // SETUP_H
