#include "Move.h"
#include <string>
#include <vector>

#pragma once

class Paper : public Move
{
    public:
    Paper::Paper()
    {
        addWinningMove("Rock");
    }
    
    std::string const Paper::getName() override 
    {
        return "Paper";
    }
};