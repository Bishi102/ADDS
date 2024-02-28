#include "Player.h"
#include <string>
using namespace std;

#ifndef HUMAN_H
#define HUMAN_H

class Human : public Player {

    public:

        string name;
        Human();
        Human(string name);
        char makeMove();
        string getName();

};

#endif