#include "Node.h"
#include "BSTree.h"

BSTree::BSTree(){
    root = nullptr;
}

void BSTree::insert(int data){
    Node *n = new Node(data);
    if(root == nullptr){
        root = n;
        return;
    }

    Node *t = root;
    Node *t2;

    while(t!= nullptr){
        t2 = t;
        if(t->getData() < data){
            t = t->getRight();
        }
        else{
            t = t->getLeft();
        }
    }

    if(data < t2->getData()){
        t = t->getRight();
    }
    else{
        t = t->getLeft();
    }
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

// Node *searchHelp(Node *n, int value){
//     int v = n->getData();
//     if(v == value){
//         return n;
//     }
//     else if(v > value){
//         searchHelp(n->getLeft(),value);
//     }
//     else if(v < value){
//         searchHelp(n->getRight(),value);
//     }
//     else return nullptr;
// }

int BSTree::search(int value){
    Node *t = root;
    if(t == nullptr){
        throw -1;
        return 0;
    }
    // if(searchHelp(t,value)->getData() == value){
    //     return value;
    // }
    // throw -2;
    // return 0;
    while(t != nullptr){
        if(t->getData() == value){
            return value;
        }
        else if(t->getData() > value){
            if(t->getLeft() != nullptr){
                t = t->getLeft();
            }
            else throw -2;
        }
        else if(t->getData() < value){
            if(t->getRight() != nullptr){
                t = t->getRight();
            }
            else throw -2;
        }
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

void BSTree::del(){
     
}

// Delete
// count the number of nodes in the tree
// count the number of leaves
// the sum of the nodes at a given level
// The height/depth of the tree