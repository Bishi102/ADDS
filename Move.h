#include <string>
#include <vector>

#ifndef MOVE_H
#define MOVE_H

class Move {

    virtual void addWinningMove() = 0;

    public:
    virtual std::string getName() const = 0;
    virtual const std::vector<std::string>& getWinningMoves() = 0;

    virtual ~Move() {};
};

#endif