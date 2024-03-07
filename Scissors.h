#include "Move.h"
#include <string>

#ifndef SCISSORS_H
#define SCISSORS_H

class Scissors : public Move {
    public:
    Scissors()
    {
        addWinningMove("Paper");
    }
    
    std::string const getName() override 
    {
        return "Scissors";
    }
} ;

#endif