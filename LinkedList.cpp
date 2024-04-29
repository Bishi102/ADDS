#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    head = nullptr;
    for (int i=0; i<len; i++) {
        insertPosition(i+1, array[i]);
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->getLink();
        delete current;
        current = next;
    }
}

Node* LinkedList::traverse(unsigned int index) {
    unsigned int position = 0;
    Node* current = head;
    while (current != nullptr && position < index-1) {
        current = current->getLink();
        position++;
    }
    return current;
}

void LinkedList::insertPosition(int pos, int newNum) {
    // if adding first node or in front of current head
    Node* newNode = new Node(newNum);
    if (pos <= 1 || head == nullptr) {
        newNode->setLink(head);
        head = newNode;
        return;
    } 
    // if inserting between two existing nodes
    Node *prevNode = traverse(pos-1);

    // if inserting out of max bound
    if (prevNode == nullptr) {
        return;
    }
    newNode->setLink(prevNode->getLink());
    prevNode->setLink(newNode);
}

bool LinkedList::deletePosition(int pos) {
    // if out of bounds or no head
    if (pos < 1 || head == nullptr) {
        return false;
    }
    // if deleting head
    if (pos == 1) {
        Node* temp = head;
        head = head->getLink();
        delete temp;
        return true;
    }
    // valid delete
    Node* current = traverse(pos-1);
    Node* temp = current->getLink();
    current->setLink(temp->getLink());
    delete temp;
    return true;
}

int LinkedList::get(int pos) {
    // out of bounds case
    if (head == nullptr || pos < 1) {
        return std::numeric_limits<int>::max();
    }
    Node* current = traverse(pos);
    // out of bounds case
    if (current == nullptr) {
        return std::numeric_limits<int>::max();
    } 
    return current->getData();
}

int LinkedList::search(int target) {
    Node* current = head;
    int index = 1;
    while (current != nullptr) {
        if (current->getData() == target) {
            return index;
        }
        current = current->getLink();
        index++;
    }
    return -1;

}

void LinkedList::printList() {
    if (head == nullptr) {
        return;
    }
    Node* current = head;
    std::cout << "[";
    while (current != nullptr) {
        std::cout << current->getData();
        if (current->getLink() != nullptr) {
            std::cout << " ";
        }
        current = current->getLink();
    }
    std::cout << "]" << std::endl;
}

