#include "Move.h"
#include <string>
#include <vector>

#pragma once

class Ninja : public Move
{
    public:
    Ninja::Ninja()
    {
        addWinningMove("Pirate");
        addWinningMove("Zombie");
    }
    
    std::string const Ninja::getName() override 
    {
        return "Ninja";
    }
};