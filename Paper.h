#include "Move.h"
#include <string>
#include <vector>

#pragma once

class Paper : public Move
{
    public:
    Paper()
    {
        addWinningMove("Rock");
    }
    
    std::string const getName() override 
    {
        return "Paper";
    }
};