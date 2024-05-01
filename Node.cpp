#include "Node.h"

Node::Node(int data, Node* link) {
    this->data = data;
    this->link = link;
}

int Node::getData()
{
    return this->data;
}

void Node::setData(int newData)
{
    this->data = newData;
}

Node *Node::getLink()
{
    return this->link;
}

void Node::setLink(Node* next)
{
    this->link = next;
}
