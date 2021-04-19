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

