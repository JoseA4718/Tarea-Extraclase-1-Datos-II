//
// Created by josea4718 on 3/2/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_II_COLLECTOR_H
#define TAREA_EXTRACLASE_1_DATOS_II_COLLECTOR_H
#include "../Singly List/SinglyList.h"
#include "../Node/Node.h"

class Collector {
private:
    Node* first{};
    Collector();
    static Collector* collector_singleton;
public:
    void* NewNode();
    void recycle_node(Node* node);
    void set_first(Node *node);
    Node* get_first();
    void show();
    static Collector *getInstance(){
        if (collector_singleton == nullptr){
            collector_singleton = new Collector();
        }
        return collector_singleton;
    };
};


#endif //TAREA_EXTRACLASE_1_DATOS_II_COLLECTOR_H
