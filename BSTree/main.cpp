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

    int search = 13;
    std::cout <<"Searching for value: " + std::to_string(search) + "\n";
    try{
        std::cout << "Value " + std::to_string(t->search(search)) + " Found\n";
    }
    catch (int e){
        if(e == -1){
            std::cout << "Tree Empty\n";
        }
        else std::cout << "Value " + std::to_string(search) + " not Found\n";
    }
    search = 25;
    std::cout <<"Searching for value: " + std::to_string(search) + "\n";
    try{
        std::cout << "Value " + std::to_string(t->search(search)) + " Found\n";
    }
    catch (int e){
        if(e == -1){
            std::cout << "Tree Empty\n";
        }
        else std::cout << "Value " + std::to_string(search) + " not Found\n";
    }

    std::cout << t->totalNodes() << " Total Nodes\n";
    std::cout << t->totalLeaves() << " Total Leaves\n";
    std::cout << t->sumNodes() << " Sum\n";
    std::cout << t->depth() << " Depth\n";
    try{
        t->del(49);
    }
    catch (int e){
        std::cout << "Value not Found\n";
    }
    
    std::cout << t->get_debug_string() << "\n";
    return 0;
}