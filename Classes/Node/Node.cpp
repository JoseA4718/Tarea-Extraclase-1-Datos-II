//
// Created by josea4718 on 3/2/21.
//

#include "Node.h"
#include "iostream"

using namespace std;

int Node::getValue() const {
    return value;
}

void Node::setValue(int value) {
    Node::value = value;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

Node::Node(int value) {
    this->value = value;
    this->next = NULL;
}
