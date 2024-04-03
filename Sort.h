#include <vector>

#pragma once

class Sort {
    public:
    virtual std::vector<int> sort(std::vector<int> list) = 0;
    ~Sort() {};
};