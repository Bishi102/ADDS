#include "QuickSort.h"
#include <algorithm>
#include <iostream>

std::vector<int> QuickSort::sort(std::vector<int> list)
{
    sort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::sort(std::vector<int> &list, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    // using 3rd element as pivot when size is at least 3
    int pivot;
    if (end < 3) {
        pivot = list.at(end);
    } else {
        pivot = list.at(2);
    }
    int pivot_index = start;
    // sorting
    for (int i = start; i < end; i++)
    {
        if (list.at(i) < pivot)
        {
            std::swap(list[i], list[pivot_index]);
            pivot_index++;
        }
    }
    std::swap(list[pivot_index], list[end]);
    // recursive call for each half seperated by pivot
    sort(list, start, pivot_index - 1);
    sort(list, pivot_index + 1, end);
}