#include "Player.h"
#include <string>

#ifndef COMPUTER_H
#define COMPUTER_H

class Computer : public Player 
{
    public:
    Computer();
    std::string getName() const override;
};

#endif