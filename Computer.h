#include "Player.h"
#include <string>
using namespace std;

#ifndef COMPUTER_H
#define COMPUTER_H

class Computer : public Player {

    public:
        string name;
        Computer();
        char makeMove();

};

#endif