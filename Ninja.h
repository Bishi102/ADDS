#include "Move.h"
#include <string>
#include <vector>

#pragma once

class Ninja : public Move
{
    public:
    Ninja()
    {
        addWinningMove("Pirate");
        addWinningMove("Zombie");
    }
    
    std::string const getName() override 
    {
        return "Ninja";
    }
};