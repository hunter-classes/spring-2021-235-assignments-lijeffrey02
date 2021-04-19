#include "Node.h"

Node::Node(){
    data = 0;
    left = nullptr;
    right = nullptr;
}

Node::Node(int data){
    this->data = data;
    left = nullptr;
    right = nullptr;
}

Node::Node(int data, Node *l, Node *r){
    this->data = data;
    left = l;
    right = r;
}

int Node::getData(){
    return data;
}

int Node::getLeft(){
    return left;
}

int Node::getRight(){
    return right;
}

void Node::setData(int d){
    this->data = d;
}

void Node::setLeft(Node *l){
    this->left = l;
}

void Node::setRight(Node *r){
    this->right = r;
}