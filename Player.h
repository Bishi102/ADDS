#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player {
    public: 
        string name;
        virtual char makeMove() = 0;
        virtual string getName() = 0;
};

#endif