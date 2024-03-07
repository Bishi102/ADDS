#include "Move.h"
#include <string>
#include <vector>

#pragma once

class Monkey : public Move
{   
    public:
    Monkey() 
    {
        addWinningMove("Ninja");
        addWinningMove("Robot");
    }
    std::string const getName() override
    {
        return "Monkey";
    }

};