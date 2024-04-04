#include "BubbleSort.h"
#include <iostream>

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    int temp, i;
    bool swap = true;
    while (swap) {
        swap = false;
        for (i=1; i<list.size(); i++) {
            if (list[i] < list[i-1]) {
                temp = list[i];
                list[i] = list[i - 1];
                list[i - 1] = temp;
                swap = true;
            }
        }
    }
    return list;
}
