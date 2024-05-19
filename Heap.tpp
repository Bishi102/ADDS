#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <cmath>  // for floor
#include <queue>
#include <functional> // for std::greater

template <typename T>
class Heap {
 private:
  std::vector<T> values;
  void heapify(int);
  void bubbleUp(int);
  void bubbleDown(int);

 public:
  Heap();  // constructs an empty heap

  // constructs a heap with the values from the given vector
  // the type T MUST provide comparison operators <, >, ==
  Heap(std::vector<T>);

  void insert(T);
  void remove(T);
  T getMin();
  int kth_largest(vector<int> values, int k);
};

/*******************************/
// default constructor
/*******************************/

template <typename T>
Heap<T>::Heap() {}

/*******************************/
// constructs a heap with the values in the given vector
// the type T MUST provide comparison operators <, >, ==
/*******************************/

template <typename T>
Heap<T>::Heap(std::vector<T> start_values) {
  // copy the values into our heap vector
  for (int i = 0; i < start_values.size(); i++) {
    values.push_back(start_values.at(i));
  }

  // starting from last non-leaf node (last parent), heapify each
  // of the parents
  int initial_parent_index = floor(values.size() / 2) - 1;
  for (int parent_index = initial_parent_index; parent_index >= 0;
       parent_index--) {
    heapify(parent_index);
  }
}

/*******************************/
// add values to the heap
/*******************************/

template <typename T>
void Heap<T>::insert(T value) {
  values.push_back(value);
  bubbleUp(values.size() - 1);
}

template <typename T>
void Heap<T>::bubbleUp(int index) {
  if (index == 0) return;  // If it's the root, no need to bubble up
  int parent_index = (index - 1) / 2;
  if (values[index] < values[parent_index]) {
    std::swap(values[index], values[parent_index]);
    bubbleUp(parent_index);
  }
}

/*******************************/
/* delete values from the heap */
/*******************************/

template <typename T>
void Heap<T>::remove(T value) {
  auto it = std::find(values.begin(), values.end(), value);
  if (it != values.end()) {
    int index = it - values.begin();
    values[index] = values.back();
    values.pop_back();
    if (index < values.size()) {
      bubbleUp(index);
      bubbleDown(index);
    }
  }
}

template <typename T>
void Heap<T>::bubbleDown(int index) {
  int left_child_index = 2 * index + 1;
  int right_child_index = 2 * index + 2;
  int smallest = index;

  if (left_child_index < values.size() && values[left_child_index] < values[smallest]) {
    smallest = left_child_index;
  }
  if (right_child_index < values.size() && values[right_child_index] < values[smallest]) {
    smallest = right_child_index;
  }
  if (smallest != index) {
    std::swap(values[index], values[smallest]);
    bubbleDown(smallest);
  }
}

/*******************************/
// find the smallest value in the heap
/*******************************/

template <typename T>
T Heap<T>::getMin() {
  if (values.empty()) {
    throw std::out_of_range("Heap is empty");
  }
  return values.front();
}

/*******************************/
// private function to heapify a given 'node'
/*******************************/

template <typename T>
void Heap<T>::heapify(int parent_index) {
  // if we're outside the index range, return
  if (parent_index < 0 || parent_index >= values.size()) return;

  // find children indexes
  int left_child_index = parent_index * 2 + 1;
  int right_child_index = parent_index * 2 + 2;

  // if parent is larger than child, swap with smallest child
  int index_of_smallest = parent_index;

  // check if left child exists and if exists, is smallest value there
  if (left_child_index < values.size() &&
      values.at(left_child_index) < values.at(index_of_smallest)) {
    // make this index the current smallest
    index_of_smallest = left_child_index;
  }

  // check if left child exists and if exists, is smallest value there
  if (right_child_index < values.size() &&
      values.at(right_child_index) < values.at(index_of_smallest)) {
    // make this index the current smallest
    index_of_smallest = right_child_index;
  }

  // if parent is not smallest, swap with smallest child
  if (index_of_smallest != parent_index) {
    T temp = values.at(parent_index);
    values.at(parent_index) = values.at(index_of_smallest);
    values.at(index_of_smallest) = temp;
  }

  // move up the 'tree' to grandparent
  heapify(floor(parent_index / 2) - 1);
}

int kth_largest(std::vector<int> values, int k) {
    // Define a min-heap using priority_queue
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;

    // Iterate over the elements in the vector
    for (int value : values) {
        if (min_heap.size() < k) {
            // If the heap has less than k elements, add the current element
            min_heap.push(value);
        } else if (value > min_heap.top()) {
            // If the heap has k elements and the current element is larger than
            // the smallest element in the heap, replace the smallest element
            min_heap.pop();
            min_heap.push(value);
        }
    }

    // The root of the min-heap is the k-th largest element
    return min_heap.top();
}

#endif