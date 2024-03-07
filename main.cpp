#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include "MoveManager.h"
#include "Move.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Robot.h"
#include "Zombie.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    Referee referee;
    MoveManager moveManager;
    Human* player = new Human;
    Human* player2 = new Human;

    Player* winner = referee.refGame(player, player2);

    if (winner == nullptr) {
        std::cout << "It's a Tie" << std::endl;
    }
    else {
        std::cout << winner->getName() << " Wins" << std::endl;
    }
    return 0;
}