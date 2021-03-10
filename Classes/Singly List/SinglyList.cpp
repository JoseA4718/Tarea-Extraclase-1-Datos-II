//
// Created by josea4718 on 3/2/21.
//

#include "SinglyList.h"
#include "../Node/Node.h"
#include "iostream"

using namespace std;

/**>
 *@brief Constructor for the singly list
 * @author JoseA4718
 */
SinglyList::SinglyList(){
    first = nullptr;
}
/**>
 *
 * @param data
 */
void SinglyList::add(int data){
    size_t size = 2;
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
