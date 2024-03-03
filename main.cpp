#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

#include <string>
#include <iostream>

int main() {

    Human* player = new Human;
    Computer* computer = new Computer;

    Referee referee;

    Player* winner = referee.refGame(player, computer);

    if (winner == nullptr) {
        std::cout << "It's a Tie" << std::endl;
    }
    else {
        std::cout << winner->getName() << " Wins" << std::endl;
    }
    return 0;
}