#include "Player.h"

#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include "MoveManager.h"
#include "Move.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Robot.h"
#include "Zombie.h"

std::string Player::getName() const 
{
    return name;
}
Move* Player::makeMove()
{
    Move* move = nullptr;
    std::string moveName;
    
    std::cout << "Enter move: "; 
    std::cin >> moveName;
    if (moveName == "Rock")
    {
        return new Rock();
    }
    else if (moveName == "Paper")
    {
        return new Paper();
    }
    else if (moveName == "Scissors")
    {
        return new Paper();
    }
    else if (moveName == "Monkey")
    {
        return new Monkey();
    }
    else if (moveName == "Ninja")
    {
        return new Ninja();
    }
    else if (moveName == "Pirate")
    {
        return new Pirate();
    }
    else if (moveName == "Robot") 
    {
        return new Robot();
    }
    else if (moveName == "Zombie")
    {
        return new Zombie();
    }

    
}