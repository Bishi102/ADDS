#include "Human.h"
#include <iostream>

Human::Human() {
    this->name = "Human";
}
Human::Human(string name) {
    this->name = name;
}
char Human::makeMove() {
    char move = 'O';
    while ((move != 'P') && (move != 'R') && (move != 'S')) {
        cout << "Enter move: "; 
        cin >> move;
    }
    return move;
}
string Human::getName() {
    return this->name;
}