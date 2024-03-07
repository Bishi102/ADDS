#include "Move.h"
#include <string>
#include <vector>

#pragma once

class Pirate : public Move
{
    public:
    Pirate::Pirate()
    {
        addWinningMove("Robot");
        addWinningMove("Monkey");
    }
    
    std::string const Pirate::getName() override 
    {
        return "Pirate";
    }
};