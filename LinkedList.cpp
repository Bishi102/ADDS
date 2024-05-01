#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

Node* LinkedList::traverse(int pos) {
	Node* currNode = head;
	int index = 0;
	while(currNode != nullptr && index < pos) {
		currNode = currNode->getLink();
		index++;
	}
	return currNode;
}

/////////// your code goes here... DO NOT change the function signatures ///////////

bool LinkedList::swap(int pos1, int pos2) {
	if (traverse(pos1) == nullptr || traverse(pos2) == nullptr) {
		return false;
	}
	int temp = traverse(pos1)->getData();
	traverse(pos1)->setData(traverse(pos2)->getData());
	traverse(pos2)->setData(temp);
	return true;
}

bool LinkedList::find_and_delete(int target) {
	Node* currNode = head;
	int counter = 0;
	while(currNode != nullptr && currNode->getData() != target) {
		if (currNode == nullptr) {
		return false;
	}
		currNode = currNode->getLink();
		counter++;
	}
	Node* prev = traverse(counter-1);
	prev->setLink(currNode->getLink());
	delete currNode; 
	return true;
}