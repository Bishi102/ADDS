#include "Node.h"

#pragma once

class LinkedList {
    Node* head;
    public:
    // constructors ande destructors
    LinkedList();
    LinkedList(int* array, int len);
    ~LinkedList();
    // methods
    Node* traverse(unsigned int index);
    void insertPosition(int pos, int newNum);
    bool deletePosition(int pos);
    int get(int pos);
    int search(int target);
    void printList();

};