#include "Move.h"
#include <string>
#include <vector>

#pragma once

class Ninja : public Move
{
    std::vector<std::string> winningMoves;
    void Ninja::addWinningMove(const std::string moveName) override
    {
        winningMoves.push_back(moveName);
    }

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
    std::vector<std::string> const Ninja::getWinningMoves() override
    {
        return this->winningMoves;
    }
};