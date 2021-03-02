//
// Created by josea4718 on 3/2/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_II_LIST_H
#define TAREA_EXTRACLASE_1_DATOS_II_LIST_H

#include "../Node/Node.h"


class List {
public:
    int len;
    Node *head;
    int getLen() const;
    void setLen(int len);
    Node *getHead() const;
    void setHead(Node *head);

};


#endif //TAREA_EXTRACLASE_1_DATOS_II_LIST_H
