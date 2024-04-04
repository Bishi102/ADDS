#include <vector>

#pragma once

class RecursiveBinarySearch {
    public:
    bool search(std::vector<int> list, int value);
    bool search(std::vector<int> list, int value, int start, int end);
};