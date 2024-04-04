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
    if (start >= end)
    {
        return;
    }

    // Choosing pivot
    int pivot;
    if (end - start >= 2)
    {
        // When sublist has at least 3 elements, choose third value 
        pivot = list.at(start + 2);
    }
    else
    {
        // Otherwise, last element is pivot
        pivot = list.at(end);
    }
    // sort
    int left = start, right = end;
    while (left <= right)
    {
        while (list[left] < pivot)
        {
            left++;
        }
        while (list[right] > pivot)
        {
            right--;
        }
        if (left <= right)
        {
            std::swap(list[left], list[right]);
            left++;
            right--;
        }
    }

    sort(list, start, right);
    sort(list, left, end);
}
