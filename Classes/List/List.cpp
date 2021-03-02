//
// Created by josea4718 on 3/2/21.
//

#include "List.h"

int List::getLen() const {
    return len;
}

void List::setLen(int len) {
    List::len = len;
}

Node *List::getHead() const {
    return head;
}

void List::setHead(Node *head) {
    List::head = head;
}