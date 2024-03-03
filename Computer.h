#include "Player.h"
#include <string>

#ifndef COMPUTER_H
#define COMPUTER_H

class Computer : public Player {
    std::string name;
    public:
        Computer();
        char makeMove() override;
        std::string getName() const override;
};

#endif