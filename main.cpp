#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <iostream>

// g++ -o main.out -std=c++11 -O2 -Wall *.cpp

int main() {
    std::vector<int> list {1, 3, 5, 4, -5, 100, 7777, 2014};
    BubbleSort bubbleSort;
    list = bubbleSort.sort(list);
    for (int i=0; i<list.size(); i++) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
    QuickSort quickSort;
    std::vector<int> other  = {1, 3, 5, 4, -5, 100, 7777, 2014};
    other = quickSort.sort(other);

    return 0;
}