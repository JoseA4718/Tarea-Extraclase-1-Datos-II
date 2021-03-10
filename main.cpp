#include <iostream>
#include "Classes/Node/Node.h"
#include "Classes/Singly List/SinglyList.h"

using namespace std;

int main() {

    SinglyList List;
    List.add(2);
    List.delete_last();
    List.add(6);
    List.add(7);
    List.delete_last();
    List.delete_last();
    List.add(7);
    List.add(9);
    return 0;
}

