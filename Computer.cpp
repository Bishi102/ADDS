#include "Computer.h"

Computer::Computer() 
{
    this->name = "Computer";
}
std::string Computer::getName() const {
    return name;
}
Move* Computer::makeMove() 
{
    return new Rock();
}