#include "Move.h"
#include <string>

#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie : public Move {
    public:
    Zombie()
    {
        addWinningMove("Pirate");
        addWinningMove("Monkey");
    }
    
    std::string const getName() override 
    {
        return "Zombie";
    }
};

#endif