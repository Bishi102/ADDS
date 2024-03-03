#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
    std::string name;
    public: 
        virtual char makeMove() = 0;
        virtual std::string getName() const = 0;
        virtual ~Player() {};
};

#endif