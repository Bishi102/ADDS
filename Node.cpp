#include "Node.h"

Node::Node(int num, Node* next) {
    data = num;
    link = next;
}

int Node::getData() {
    return data;
}

Node* Node::getLink() {
    return link; 
}

void Node::setLink(Node* next) {
    link = next;

}
