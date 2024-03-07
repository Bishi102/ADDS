#include "Move.h"
#include <string>

#ifndef ROBOT_H
#define ROBOT_H

class Robot : public Move {
    public:
    Robot::Robot()
    {
        addWinningMove("Ninja");
        addWinningMove("Zombie");
    }
    
    std::string const Robot::getName() override 
    {
        return "Robot";
    }
};

#endif