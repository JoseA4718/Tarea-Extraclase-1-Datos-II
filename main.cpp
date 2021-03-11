#include <iostream>
#include "Classes/Node/Node.h"
#include "Classes/Singly List/SinglyList.h"

using namespace std;

/**>
 * @brief Creates a new instance of a singly list and calls for adding and deleting methods.
 * @return returns 0 to terminate the main function.
 * @author Jose Antonio Espinoza Chaves
 */
int main() {

    SinglyList List;
    List.add(1);
    List.delete_last();
    List.add(2);
    List.add(3);
    List.add(4);
    List.delete_last();
    List.delete_last();
    List.add(5);
    List.add(6);
    return 0;
}

