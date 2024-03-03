#include "Human.h"
#include <iostream>

Human::Human() {
    this->name = "Human";
}
Human::Human(const std::string name) {
    this->name = name;
}
char Human::makeMove() {
    char move;
    bool isValidMove = false;

    while (!isValidMove) {
        std::cout << "Enter move: ";
        std::cin >> move;

        if (move == 'R' || move == 'P' || move == 'S') {
            isValidMove = true;
        } else {
            std::cout << "Invalid move. Please enter 'R', 'P', or 'S'." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return move;
}
std::string Human::getName() const{
    return this->name;
}
