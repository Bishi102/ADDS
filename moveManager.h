#include "Move.h"

#include <algorithm>
#include <string>
#include <vector>

#pragma once 

class MoveManager
{
    std::vector<std::string> winningMoves;

    public:
    moveManager::moveManager() {};

    // Adds the winning moves to the main/central vector
    void addMoves(Move* move1) 
    {
        const std::vector<std::string>& wins = move1->getWinningMoves();
        for (const auto& win : wins)
        {
            winningMoves.push_back(win);
        }
    } 
    // Returns true if move2 is int he main/central vector
    bool const winsAgainst(Move* move1, Move* move2)
    {
        const std::string name2 = move2->getName();

        return std::find(winningMoves.begin(), winningMoves.end(), name2) != winningMoves.end();
    }
};