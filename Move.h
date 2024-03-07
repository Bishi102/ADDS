#include <string>
#include <vector>

#pragma once

class Move 
{
    protected:
    std::vector<std::string> winningMoves;
    void addWinningMove(const std::string& moveName);
    
    public:
    std::vector<std::string> const getWinningMoves();
    virtual std::string const getName() = 0;
 
    virtual ~Move() {};
};


