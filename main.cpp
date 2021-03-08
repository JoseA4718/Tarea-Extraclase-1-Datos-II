#include <iostream>
#include "Classes/Node/Node.h"
#include "Classes/Singly List/SinglyList.h"

using namespace std;

int main() {
    SinglyList *list = new SinglyList();

    list->append(5);
    list->append(6);
    list->append(4);
    list->append(2);
    list->append(7);

    list->show();

    list->DeleteFirst();

    list->show();

    return 0;
}

