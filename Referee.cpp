#include "Referee.h"
// Adds the winning moves to the main/central vector
void Referee::addMoves(Move* move1) 
{
    const std::vector<std::string>& wins = move1->getWinningMoves();

    for (const auto& win : wins)
    {
        winningMoves.push_back(win);
    }
} 
// Returns true if move2 is int he main/central vector
bool const Referee::winsAgainst(Move* move1, Move* move2)
{
    const std::string name2 = move2->getName();

    return std::find(winningMoves.begin(), winningMoves.end(), name2) != winningMoves.end();
}
// Creates players, refs game, determines winner
Player* Referee::refGame(Player* player1, Player* player2)
{
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    addMoves(move1);

    if (winsAgainst(move1, move2))
    {
        return player1;
    }
    else
    {
        return player2;
    }
}
