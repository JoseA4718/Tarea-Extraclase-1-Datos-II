//
// Created by josea4718 on 3/2/21.
//

#include "Node.h"
#include "iostream"
#include "../Collector/Collector.h"

using namespace std;

Node::Node() {}

/**
void* Node::operator new(size_t size) {
    void*
}
*/
void Node::set_next(Node *node) {
    this->next = node;
}

void Node::set_data(int data) {
    this->data = data;
}

Node* Node::get_next() {
    return this->next;
}

