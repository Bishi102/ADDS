#include "Move.h"
#include <string>
#include <vector>

#pragma once

class Pirate : public Move
{
    std::vector<std::string> winningMoves;
    void Pirate::addWinningMove(const std::string moveName) override
    {
        winningMoves.push_back(moveName);
    }

    public:
    Pirate::Pirate()
    {
        addWinningMove("Monkey");
        addWinningMove("Robot");
    }
    
    std::string const Pirate::getName() override 
    {
        return "Pirate";
    }
    std::vector<std::string> const Pirate::getWinningMoves() override
    {
        return this->winningMoves;
    }
};