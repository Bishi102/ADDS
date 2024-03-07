#include "Move.h"
#include <string>

#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie : public Move {
    public:
    Zombie::Zombie()
    {
        addWinningMove("Pirate");
        addWinningMove("Monkey");
    }
    
    std::string const Zombie::getName() override 
    {
        return "Zombie";
    }
};

#endif