#include "Human.h"
#include <iostream>


Human::Human() {
    this->name = "Human";
}
Human::Human(const std::string name) {
    this->name = name;
}

std::string Human::getName() const{
    return this->name;
}
Move* Human::makeMove()
{
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
    else 
    {
        return nullptr;
    }
}