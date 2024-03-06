#include <string>

#ifndef MOVE_H
#define MOVE_H

class Move {

    public:
    virtual std::string getName() = 0;

    virtual ~Move() {};
};

#endif