#include "Move.h"
#include <string>

#ifndef SCISSORS_H
#define SCISSORS_H

class Scissors : public Move {
    public:
    Scissors::Scissors()
    {
        addWinningMove("Paper");
    }
    
    std::string const Scissors::getName() override 
    {
        return "Scissors";
    }
} ;

#endif