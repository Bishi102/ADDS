#include "Truckloads.h"
#include <iostream>

int main() {
    Truckloads* truck = new Truckloads;
    std::cout << truck->numTrucks(16,5);
    return 0;
}