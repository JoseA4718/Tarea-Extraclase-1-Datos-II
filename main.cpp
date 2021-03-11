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

