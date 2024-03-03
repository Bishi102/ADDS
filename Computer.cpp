#include "Computer.h"

Computer::Computer() {}

char Computer::makeMove() {
    return 'R';
}

std::string Computer::getName() const {
    return name;
}