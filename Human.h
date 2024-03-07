#include "Computer.h"
#include "Referee.h"
#include "Move.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Robot.h"
#include "Zombie.h"

#include "Player.h"
#include <string>

#ifndef HUMAN_H
#define HUMAN_H

class Human : public Player 
{
    std::string name;
    public:
    Human();
    Human(const std::string name);
    std::string getName() const override;
    Move* Human::makeMove() override;
};

#endif
