

#pragma once

class Node {
    int data;
    Node* link;

    public:
    Node();
    Node(int num, Node* next);
    int getData();
    Node* getLink();
    void setLink(Node* next);
};