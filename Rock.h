#include "Move.h"
#include <string>

#ifndef ROCK_H
#define ROCK_H

class Rock : public Move {
    public:
    Rock::Rock()
    {
        addWinningMove("Scissors");
    }
    
    std::string const Rock::getName() override 
    {
        return "Rock";
    }
};

#endif