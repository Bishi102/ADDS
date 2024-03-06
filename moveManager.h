#include "Move.h"

#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

#pragma once 

template <typename S>
class MoveManager
{
    std::vector<S> winningMoves;
    public:
    
    // Adds the winning moves to the main/central vector
    void addMove(const S& move1) 
    {
        const std::vector<S>& wins = move1.getWinningMoves();
        for (const auto& win : wins)
        {
            winningMoves.push_back(win);
        }
    } 
    // Returns true if move2 is int he main/central vector
    bool const winsAgainst(const S& move1, const S& move2)
    {
        const std::string& name2 = move2.getName();

        return std::find(winningMoves.begin(), winningMoves.endl(), name2)
    }
};