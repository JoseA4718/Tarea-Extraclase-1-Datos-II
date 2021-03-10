//
// Created by josea4718 on 3/2/21.
//

#include "Node.h"
#include "iostream"
#include "../Collector/Collector.h"

using namespace std;

Node::Node() {}

void* Node::operator new(size_t size) {
    void* memory_space;
    Collector::getInstance()->show();
    memory_space = Collector::getInstance()->NewNode();

    if (memory_space == nullptr){
        Node* list_node = :: new Node();
        cout << "\nNode created on a new memory address: " << &list_node << endl;
        return list_node;
    }
    else{
        cout << "\nNode created on a recycled memory address: " << &memory_space << endl;
        return memory_space;
    }
}

void Node::operator delete(void *a) {
    Collector::getInstance()->recycle_node((Node*)a);
    cout << "\nNode " << static_cast<void*>(a) << " was deleted from the list and added to garbage Collector\n" << endl;
}

void Node::set_next(Node *node) {
    this->next = node;
}

void Node::set_data(int num) {
    this->data = num;
}

Node* Node::get_next() {
    return this->next;
}

int Node::get_data() {
    return this->data;
}

