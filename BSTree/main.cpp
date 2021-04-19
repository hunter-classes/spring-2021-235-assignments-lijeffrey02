#include "BSTree.h"
#include "Node.h"

int main(){
    Node *n = new Node(20);
    std::cout << n->getData() << "\n";
    Node *n2 = new Node(30);
    n->setLeft(n2);
    n2 = new Node(40);
    n->setRight(n2);
    std::cout << n->getLeft()->getData() << "\n";
    std::cout << n->getRight()->getData() << "\n\n";

    std::cout << "Binary Search Tree\n";
    BSTree *t = new BSTree();
    t->setup();
    std::cout << t->get_debug_string() << "\n";
    try{
        int x = t->search(0);
        std::cout << "Value Found";
    }
    catch (int e){
        std::cout << "Value not Found";
    }
    return 0;
}