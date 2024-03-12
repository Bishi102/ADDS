#include "Truckloads.h"
#include <cmath>

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    } else if (numCrates % 2 == 0) {
        int halfCrate = numCrates/2;
        return 2 * numTrucks(halfCrate, loadSize);
    } else {
        int leftCrate = std::floor(numCrates/2);
        int rightCrate = numCrates - leftCrate;
        return (numTrucks(leftCrate, loadSize) + numTrucks(rightCrate, loadSize));
    }
};