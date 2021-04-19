#include "Node.h"
#include "BSTree.h"

BSTree::BSTree(){
    root = nullptr;
}

void BSTree::insert(int data){

}

std::string gds_helper(Node *n){
    if (n == nullptr){
        return "";
    }
    std::string a = gds_helper(n->getLeft());
    std::string b = std::to_string(n->getData());
    std::string c = gds_helper(n->getRight());
    return a + "  [" + b + "]  " + c;
}

std::string BSTree::get_debug_string(){
    if(root == nullptr){
        return "";
    }
    // return std::to_string(root->getLeft()->getData()) + " " + std::to_string(root->getData()) + " " + std::to_string(root->getRight()->getData());
    return gds_helper(root);
}

int BSTree::search(int value){
    Node *t = root;
    while(t != nullptr){
        if(t->getData() == value){
            return value;
        }
        else if(t->getData() > value){
            t = t->getLeft();
        }
        else if(t->getData() < value){
            t = t->getRight();
        }
        else throw -1;
    }
    return 0;
}

void BSTree::setup(){
    Node *n = new Node(10);
    root = n;
    n = new Node(5);
    root->setLeft(n);
    n = new Node(15);
    root->setRight(n);
    n = new Node(2);
    root->getLeft()->setLeft(n);
    root->getLeft()->setRight(new Node(8));
    root->getRight()->setLeft(new Node(13));
    root->getRight()->setRight(new Node(17));
}