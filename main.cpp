#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

#include <iostream>
using namespace std;

int main() {

    Human* player = new Human;
    Computer* computer = new Computer;

    Referee referee;

    Player* winner = referee.refGame(player, computer);

    if (winner == nullptr) {
        cout << "It's a Tie" << endl;
    }
    else {
        cout << winner->getName() << " Wins" << endl;
    }
    
    return 0;
}