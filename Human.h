#include "Player.h"
#include <string>

#ifndef HUMAN_H
#define HUMAN_H

class Human : public Player {
    std::string name;
    public:
        Human();
        Human(const std::string name);
        std::string getName() const override;

        char makeMove() override;
};

#endif
