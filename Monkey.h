#include "Move.h"
#include <string>
#include <vector>

#pragma once

class Monkey : public Move
{
    std::vector<std::string> winningMoves;
    void Monkey::addWinningMove(const std::string moveName) override
    {
        winningMoves.push_back(moveName);
    }

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
    std::vector<std::string> const Monkey::getWinningMoves() override
    {
        return this->winningMoves;
    }
};