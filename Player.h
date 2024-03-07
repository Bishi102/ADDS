#include "Move.h"
#include <iostream>

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
    protected:
    std::string name;
    public: 
    virtual std::string getName() const = 0;
    virtual Move* makeMove() = 0;

    virtual ~Player() {};
};

#endif