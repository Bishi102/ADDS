#include "Move.h"

void Move::addWinningMove(const std::string& moveName) 
{
    winningMoves.push_back(moveName);
}
std::vector<std::string> const Move::getWinningMoves()
{
    return winningMoves;
}