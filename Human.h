#include "Player.h"
#include <string>
using namespace std;

#ifndef HUMAN_H
#define HUMAN_H

class Human : public Player {

    public:
        Human();
        Human(string name);
        string getName();

        char makeMove();

        
        

};

#endif