//
// Created by josea4718 on 3/2/21.
//

#include "Collector.h"

using namespace std;

Collector* Collector::collector_singleton = nullptr;
Collector::Collector() {}

void Collector::show() {
    Node *tmp = first;
    if (this->first == nullptr){
        cout << "\nCollector has no available memory spaces\n" << endl;
    }else{
        cout << "\nMemory spaces available in collector:" << endl;
        while (tmp != nullptr){
            cout << static_cast<void*>(tmp) << "\n";
            tmp =tmp -> get_next();
        }
    }
}

void* Collector::NewNode() {
    if (this->first != nullptr){
        Node* tmp = this->first;
        this->set_first(first->get_next());
        tmp->set_next(nullptr);
        return tmp;
    }else{
        return nullptr;
    }
}

void Collector::recycle_node(Node *node) {
    node->set_next(this->get_first());
    this->set_first(node);
}

void Collector::set_first(Node *node) {
    this->first = node;
}

Node* Collector::get_first() {
    return this->first;
}

