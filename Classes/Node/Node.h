//
// Created by josea4718 on 3/2/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_II_NODE_H
#define TAREA_EXTRACLASE_1_DATOS_II_NODE_H
#include <iostream>
#include <stdlib.h>


class Node {
public:
    void* operator new (size_t size);
    void operator delete(void *memory_pointer);
    Node();
    void set_next(Node *a);
    void set_data(int data);
    Node* get_next();
    int get_data();

private:
    Node *next;
    int data;
};


#endif //TAREA_EXTRACLASE_1_DATOS_II_NODE_H
