//
// Created by josea4718 on 3/2/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_II_NODE_H
#define TAREA_EXTRACLASE_1_DATOS_II_NODE_H


class Node {
public:
    Node(int value);

    int value;
    Node *next;

    int getValue() const;

    void setValue(int value);

    Node *getNext() const;

    void setNext(Node *next);

};


#endif //TAREA_EXTRACLASE_1_DATOS_II_NODE_H
