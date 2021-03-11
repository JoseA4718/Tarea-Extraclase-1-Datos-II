//
// Created by josea4718 on 3/2/21.
//

#include "Node.h"
#include "iostream"
#include "../Collector/Collector.h"

using namespace std;
/**>
 * @author Jose Antonio Espinoza Chaves
 */
Node::Node() {}
/**>
 * @brief Creates a custom new operator for the Node. First it gets the singleton instance of the collector and checks if there are any available memory addresses in the Collector. If there is an available memory address it sends the node to the add() method of the List so the new Node will be created on the same memory address, otherwise it returns a newly created node to the add() method to make it create itself on a new memory address.
 * @param size is a size template parameter
 * @return If the Collector is not empty, it returns the first node in Collector to the add() method in List, otherwise it returns a newly created node.
 */
void* Node::operator new(size_t size) {
    void* memory_space;
    Collector::getInstance()->show();
    memory_space = Collector::getInstance()->NewNode();

    if (memory_space == nullptr){
        Node* list_node = :: new Node();
        cout << "\nNode created on a new memory address: " << static_cast<void*>(list_node) << endl;
        return list_node;
    }
    else{
        cout << "\nNode created on a recycled memory address: " << static_cast<void*>(memory_space) << endl;
        return memory_space;
    }
}

/**>
 * @brief Creates a custom delete operator for the Node. It receives the deleting node, gets the Collector instance and calls the recycling method of the Collector with the specified node.
 * @param deleting_node It is the memory address of the node you are deleting.
 */
void Node::operator delete(void *deleting_node) {
    Collector::getInstance()->recycle_node((Node*)deleting_node);
    cout << "\nNode in address: " << static_cast<void*>(deleting_node) << " was deleted from the list and added to garbage Collector\n" << endl;
}

/**>
 * @brief sets the pointer to the specified node.
 * @param node
 */
void Node::set_next(Node *node) {
    this->next = node;
}

/**>
 * @brief Sets a value for the Node.
 * @param num
 */
void Node::set_data(int num) {
    this->data = num;
}

/**>
 * @brief Gets the next Node from the Node this method is applied.
 * @return
 */
Node* Node::get_next() {
    return this->next;
}

/**>
 * @brief Gets the data of the Node this method is applied to.
 * @return
 */
int Node::get_data() {
    return this->data;
}

