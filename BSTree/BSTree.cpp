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
    return  std::to_string(n->getData()) + "\n" + gds_helper(n->getLeft()) + "\t" +  gds_helper(n->getRight()) + "\n";
}

std::string BSTree::get_debug_string(){
    if(root == nullptr){
        return "";
    }
    // return std::to_string(root->getLeft()->getData()) + " " + std::to_string(root->getData()) + " " + std::to_string(root->getRight()->getData());
    return gds_helper(root);
}

void BSTree::setup(){
    Node *n = new Node(10);
    root = n;
    n = new Node(20);
    root->setLeft(n);
    n = new Node(30);
    root->setRight(n);
    n = new Node(40);
    root->getLeft()->setLeft(n);
}