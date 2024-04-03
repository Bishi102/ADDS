#include "Sort.h"

#pragma once

class QuickSort : public Sort {
    public:
    std::vector<int> sort(std::vector<int> list);
    void sort(std::vector<int>& list, int start, int end);
};