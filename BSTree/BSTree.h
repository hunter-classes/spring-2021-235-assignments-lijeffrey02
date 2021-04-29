#pragma once
#include "Node.h"
#include <iostream>

class BSTree{
    private:
        Node *root;
    public:
        BSTree();
        std::string get_debug_string();
        void insert(int data);
        void setup();
        int search(int value);
        void del();
        int totalNodes();
        int totalLeaves();
        int sumNodes();
        int height();
};


// Delete
// count the number of nodes in the tree
// count the number of leaves
// the sum of the nodes at a given level
// The height/depth of the tree