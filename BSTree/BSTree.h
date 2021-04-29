#pragma once
#include "Node.h"
#include <iostream>

class BSTree{
    private:
        Node *root;
    public:
        BSTree();
        std::string get_debug_string();
        // std::string debugString2();
        void insert(int data);
        void setup();
        int search(int value);
        int totalNodes();
        int totalLeaves();
        
        int sumNodes();
        int depth();

        void del(int);
};

