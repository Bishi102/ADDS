#include <vector>
#include <queue>
#include <functional> // for std::greater

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;
    for (int value : values) {
        if (min_heap.size() < k) {
            min_heap.push(value);
        } else if (value > min_heap.top()) {
            min_heap.pop();
            min_heap.push(value);
        }
    }
    return min_heap.top();
}