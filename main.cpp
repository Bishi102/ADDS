#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <iostream>
#include <sstream>

// g++ -o main.out -std=c++11 -O2 -Wall *.cpp

int main()
{
    int num, i;
    // get input and put into a vector
    std::string input;
    std::cout << "Enter a line of integers separated by space: ";
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::vector<int> list;
    while (iss >> num)
    {
        list.push_back(num);
    }
    // sort input list
    QuickSort quickSort;
    list = quickSort.sort(list);
    // search for 1 in sorted list and format output
    RecursiveBinarySearch binarySearch;
    if (binarySearch.search(list,1))
    {
        std::cout << "true ";
    } else 
    {
        std::cout << "false ";
    }
    for (i=0; i<list.size(); i++)
    {
        std::cout << list.at(i) << " ";
    }

}