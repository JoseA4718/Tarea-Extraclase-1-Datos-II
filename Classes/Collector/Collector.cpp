//
// Created by josea4718 on 3/7/21.
//

#include "Collector.h"

using namespace std;
/**
 * Creates a singleton instance for the Collector
 */
Collector* Collector::collector_singleton = nullptr;
/**>
 * @author Jose Antonio Espinoza Chaves
 */
Collector::Collector() {}

/**>
 * @brief Checks if the Collector has any nodes on it, if not then it console outputs it is empty, otherwise it traverse the Collector printing the memory address of every node.
 */
void Collector::show() {
    Node *tmp = first;
    if (this->first == nullptr){
        cout << "\nCollector has no available memory spaces\n" << endl;
    }else{
        cout << "\nMemory spaces available in collector:" << endl;
        while (tmp != nullptr){
            cout << "->" << static_cast<void*>(tmp) << "\n";
            tmp =tmp -> get_next();
        }
    }
}

/**>
 * @brief It gets the first node in Collector in order to use its memory address for a new node in list.
 * @return If the Collector is not empty it returns the Node that was on the first position, otherwise it returns null in order to force the new node to create itself in a new memory address.
 */
void* Collector::NewNode() {
    if (this->first != nullptr){
        Node* tmp = this->first;
        this->set_first(first->get_next());
        tmp->set_next(nullptr);
        return tmp;
    }else{
        return nullptr;
    }
}

/**>
 * @brief Receives a deleting node from the List, then it assigns it to the head of the Collector.
 * @param It receives a node that has just been deleted from the List.
 */
void Collector::recycle_node(Node *node) {
    node->set_next(this->get_first());
    this->set_first(node);
}

/**>
 * @brief Receives a node and makes it the first or header in the Collector
 * @param node
 */
void Collector::set_first(Node *node) {
    this->first = node;
}
/**>
 * @brief Gets the head of the Collector
 * @return Returns the node in the first position or head of the Collector
 */
Node* Collector::get_first() {
    return this->first;
}

