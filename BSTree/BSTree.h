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
};