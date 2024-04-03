#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    bool swap = true;
    while (swap) {
        swap = false;
        for (int i=0; i<list.size(); i++) {
            if (list[i] < list[i-1]) {
                list[i] += list[i-1];
                list[i-1] -= list[i];
                list[i] -= list[i-1];
                swap = true;
            }
        }
    }
    return list;
}
