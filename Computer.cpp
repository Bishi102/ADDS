#include "Computer.h"


char Computer::makeMove() {
    return 'R';
}
Computer::Computer() {
    this->name = "Computer";
}
string Computer::getName() {
    return this->name;
}