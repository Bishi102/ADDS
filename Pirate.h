#include "Move.h"
#include <string>
#include <vector>

#pragma once

class Pirate : public Move
{
    public:
    Pirate()
    {
        addWinningMove("Robot");
        addWinningMove("Monkey");
    }
    
    std::string const getName() override 
    {
        return "Pirate";
    }
};