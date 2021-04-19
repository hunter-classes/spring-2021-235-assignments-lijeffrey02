#include "Node.h"
#include "BSTree.h"

BSTree::BSTree(){
    root = nullptr;
}

void BSTree::insert(int data){

}

std::string BSTree::get_debug_string(){
    std::to_string(root->getLeft()->getData()) + "  " + std::to_string(root->getRight()->getData()) + "\n" +
    std::to_string(root->getLeft()->getLeft()->getData()) + "  " + std::to_string(root->getRight()->getLeft()->getData()) + "  " + std::to_string(root->getRight()->getRight()->getData()) + "\n" +
    std::to_string(root->getLeft()->getLeft()->getLeft()->getData());
}

void BSTree::setup(){
    Node *n = new Node(10);
    root = n;
    n = new Node(20);
    root->setRight(n);
    Node *n2 = new Node(30);
    n->setRight(n2);
    n2 = new Node(25);
    n->setLeft(n2);
    n2 = new Node(5);
    root->setLeft(n2);
    n = new Node(3);
    n2->setLeft(n);
    n2 = new Node(7);
    n->setLeft(n2);
}