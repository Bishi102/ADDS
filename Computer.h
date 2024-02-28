#include "Player.h"
#include <string>
using namespace std;

#ifndef COMPUTER_H
#define COMPUTER_H

class Computer : public Player {

    public:
        char makeMove();
        string getName();
        Computer();
};

#endif