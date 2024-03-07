#include "Move.h"
#include <string>
#include <vector>

#pragma once

class Monkey : public Move
{   
    public:
    Monkey::Monkey() 
    {
        addWinningMove("Ninja");
        addWinningMove("Robot");
    }
    std::string const Monkey::getName() override
    {
        return "Monkey";
    }

};