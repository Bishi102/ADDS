#include "Move.h"
#include <string>
#include <vector>

#pragma once

class Paper : public Move
{
    std::vector<std::string> winningMoves;
    void Paper::addWinningMove(const std::string moveName) override
    {
        winningMoves.push_back(moveName);
    }

    public:
    Paper::Paper()
    {
        addWinningMove("Rock");
    }
    
    std::string const Paper::getName() override 
    {
        return "Paper";
    }
    std::vector<std::string> const Paper::getWinningMoves() override
    {
        return this->winningMoves;
    }
};