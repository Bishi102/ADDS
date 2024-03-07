#include "Player.h"
#include <algorithm>
#include <string>
#include <vector>

#ifndef REFEREE_H
#define REFEREE_H

class Referee {
    std::vector<std::string> winningMoves;
    public:
    Referee() {};
    Player* refGame(Player* player1, Player* player2);
    void addMoves(Move* move1);
    bool const winsAgainst(Move* move1, Move* move2);

};

#endif


