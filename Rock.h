#include "Move.h"
#include <string>

#ifndef ROCK_H
#define ROCK_H

class Rock : public Move {
    public:
    Rock()
    {
        addWinningMove("Scissors");
    }
    
    std::string const getName() override 
    {
        return "Rock";
    }
};

#endif