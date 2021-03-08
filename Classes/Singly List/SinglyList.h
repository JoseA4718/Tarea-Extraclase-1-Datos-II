//
// Created by josea4718 on 3/2/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_II_SINGLYLIST_H
#define TAREA_EXTRACLASE_1_DATOS_II_SINGLYLIST_H

#include "../Node/Node.h"


class SinglyList {
public:
    SinglyList();
    ~SinglyList();
    void add(int data);
    void delete_last();
    void show();
private:
    Node* first;
};


#endif //TAREA_EXTRACLASE_1_DATOS_II_SINGLYLIST_H
