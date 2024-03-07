#include "Human.h"
#include <iostream>


Human::Human() {
    this->name = "Human";
}
Human::Human(const std::string name) {
    this->name = name;
}

std::string Human::getName() const{
    return this->name;
}
