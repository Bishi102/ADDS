#ifndef NODE_H
#define NODE_H

class Node {
    int data;
    Node* link;
    friend class LinkedList;
public:
    Node(int, Node*);
    int getData();
    void setData(int newData);
    Node* getLink();
    void setLink(Node* next);
};

#endif