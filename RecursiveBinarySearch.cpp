#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int value) 
{
    return search(list, value, 0, list.size()-1);
}

bool RecursiveBinarySearch::search(std::vector<int> list, int value, int start, int end)
{
    // base case
    if (start > end)
    {
        return false;
    }
    // getting mid
    int mid = start + (end-start)/2;
    // search cases
    if (list[mid] == value)
    {
        return true;
    }
    if (list[mid] < value) 
    {
        return search(list, value, mid+1, end);
    }
    return search(list, value, start, mid-1);
}
