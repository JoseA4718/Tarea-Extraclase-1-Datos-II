//
// Created by josea4718 on 3/2/21.
//

#include "SinglyList.h"
#include "../Node/Node.h"
#include "iostream"

using namespace std;

/**>
 *@brief Constructor for the singly list.
 * @author Jose Antonio Espinoza Chaves
 */
SinglyList::SinglyList(){
    first = nullptr;
}
/**>
 * @brief First sets the size parameter in order to call the new and delete operators in Node.cpp. Then it calls the new operator, receiving either a recycled node or a newly created node, and it sets its data to the data in the parameter. Finally, it checks if the list is empty, if it is, it maes that node the head, otherwise it pushes the first to the second position and sets the new node as head. Finally it prints the list.
 * @param data It is the data the new Node will have.
 */
void SinglyList::add(int data){
    size_t size = 2;
    cout << "\nNew node is being created, system is checking if there are available memory addresses in the Collector" << endl;
    Node *new_node = new Node();
    new_node->set_data(data);
    if (first == nullptr){
        first = new_node;
    }
    else{
        new_node -> set_next(first);
        first = new_node;
    }
    this -> show();
}

/**>
 * @brief Method to print the list in the console in order to make it easier to understand.
 */
void SinglyList::show() {
    Node *tmp = first;
    if (this->first == nullptr){
        cout<<"\n----------------------------\nThe list is currently empty\n----------------------------"<< endl;
    }else{
        cout<<"\nCurrent list status:\n---------------------------"<<endl;
        while (tmp != nullptr){
            cout << "[" << "DATA: " << tmp->get_data() << " | ADDRESS: " << static_cast<void*>(tmp) << "]" << " -> ";
            tmp = tmp->get_next();
        }
        cout<< "null" << "\n---------------------------";
    }
}

/**>
 * @brief This method checks if the list is empty, if it is, it tells the user it is empty via console. If it is not empty, it traverse the list until it gets to the end and deletes the last position. Finally, it prints the list.
 */
void SinglyList::delete_last() {

    Node *tmp = this->first;

    if (tmp == nullptr){
        cout << "The list is currently empty"<< endl;
    }
    else{
        if (tmp->get_next() == nullptr){
            delete this->first;
            this->first = nullptr;
        }
        else{
            while (tmp->get_next()->get_next() != nullptr){
                tmp = tmp->get_next();
            }
            delete tmp->get_next();
            tmp->set_next(nullptr);
        }
    }
    this->show();
}
