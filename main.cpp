#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>

int main() {
    Reverser Reverse;
    int value = 12345;
    int newValue = Reverse.reverseDigit(value);
    std::cout << newValue << std::endl;

    std::string hello = "hello";
    std::cout << Reverse.reverseString(hello);
    
    return 0;
}