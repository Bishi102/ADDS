#include <string>
#include <vector>

#pragma once

class Move 
{
    virtual void addWinningMove(const std::string& moveName) = 0;

    public:
    virtual std::string const getName() = 0;
    virtual std::vector<std::string> const getWinningMoves() = 0;
    virtual void addWinningMove(const std::string move) = 0;

    virtual ~Move() {};
};


