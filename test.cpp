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
    if (end - start >= 2) {
        // When the sublist has at least 3 elements, choose the third value
        pivot = list.at(start + 2);
    } else {
        // Otherwise, choose the last element as the pivot
        pivot = list.at(end);
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
    if (end - start >= 2) {
        // When the sublist has at least 3 elements, choose the third value
        std::swap(list[pivot_index], list.at(start+2));
    } else {
        // Otherwise, choose the last element as the pivot
        std::swap(list[pivot_index], list[end]);
    }
    
    // recursive call for each half seperated by pivot
    sort(list, start, pivot_index - 1);
    sort(list, pivot_index + 1, end);
}