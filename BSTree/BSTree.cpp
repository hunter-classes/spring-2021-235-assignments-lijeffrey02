#include "Node.h"
#include "BSTree.h"

BSTree::BSTree(){
    root = nullptr;
}

bool hasLeft(Node* cur){
    return cur->getLeft() != nullptr;
}

bool hasRight(Node* cur){
    return cur->getRight() != nullptr;
}

bool isLeaf(Node* cur){
    return !hasLeft(cur) && !hasRight(cur);
}

bool has2(Node* cur){
    return hasLeft(cur) && hasRight(cur);
}

bool hasNone(Node* cur){
    return !hasLeft(cur) && !hasRight(cur);
}

void insertHelp(int data, Node* prev, Node* cur){
    if(cur == nullptr){
        if(data < prev->getData()){
            prev->setLeft(new Node(data));
        }
        else{
            prev->setRight(new Node(data));
        }
        return;
    }

    if(cur->getData() == data){
        return;
    }
    if(cur->getData() > data ){
        return insertHelp(data, cur, cur->getLeft());
    }
    else{
        return insertHelp(data, cur, cur->getRight());
    }
}

void BSTree::insert(int data){
    Node *n = new Node(data);
    if(root == nullptr){
        root = n;
        return;
    }
    insertHelp(data,root,root);
}

bool searchHelp(Node *n, int value){
    if(n == nullptr){
        return false;
    }
    if(n->getData() == value){
        return true;
    }
    if(n->getData() > value){
        return searchHelp(n->getLeft(), value);
    }
    else{
        return searchHelp(n->getRight(), value);
    }
}

int BSTree::search(int value){
    if(root == nullptr){
        throw -1;
        return 0;
    }
    if(searchHelp(root,value)){
        return value;
    }
    throw -2;
    return 0;
}

void BSTree::setup(){
    insert(50);
    insert(25);
    insert(75);
    insert(5);
    insert(28);
    insert(54);
    insert(80);
    insert(0);
    insert(6);
    insert(52);
    insert(58);
    insert(76);
    insert(100);
    insert(3);
}
int delHelp2(bool left, Node* cur){
    if(isLeaf(cur)){
        return cur->getData();
    }
    if(left){
        return delHelp2(true,cur->getRight());
    }
    else{
        return delHelp2(false,cur->getLeft());
    }
}

void delHelp(int data, Node* prev, Node* cur){
    if(cur == nullptr){//if data is not found
        throw -1;
        return;
    }
    if(data > cur->getData()){
        delHelp(data, cur, cur->getRight());
        return;
    }
    else if(data < cur->getData()){
        delHelp(data, cur, cur->getLeft());
        return;
    }
    // //cur->getData() == data
    // if(isLeaf(cur)){//if you are deleting a leaf
    //     if(prev->getLeft()->getData() == cur->getData()){
    //         prev->setRight(nullptr);
    //     }
    //     else{
    //         prev->setLeft(nullptr);
    //     }
    //     delete cur;
    //     return;
    // }
    // else if(has2(cur)){//if has 2 children
    //     int n = delHelp2(data,prev);
    //     delHelp(n,cur,cur);
    //     cur->setData(n);
    //     return;
    // }
    // else if(hasRight(cur)){//only right child
    //     if(prev->getLeft() == cur){
    //         prev->setRight(cur->getRight());
    //     }
    //     else{
    //         prev->setLeft(cur->getLeft());
    //     }
    //     cur = nullptr;
    //     delete cur;
    //     return;
    // }
    // else if(hasLeft(cur)){//only left child
    //     if(prev->getLeft() == cur){
    //         prev->setRight(cur->getLeft());
    //     }
    //     else{
    //         prev->setLeft(cur->getRight());
    //     }
    //     delete cur;
    //     return;
    // }
    

}

void BSTree::del(int data){
    if(root == nullptr){
        throw -1;
        return;
    }
    delHelp(data,root,root);
}

int totalNodesHelp(Node* cur){
    if(cur == nullptr){
        return 0;
    }
    return 1 + totalNodesHelp(cur->getLeft()) + totalNodesHelp(cur->getRight());
}

int BSTree::totalNodes(){
    return totalNodesHelp(root);
}

int totalLeavesHelp(Node* cur){
    if(cur == nullptr){
        return 0;
    }
    if(hasNone(cur)){
        return 1;
    }
    return totalLeavesHelp(cur->getLeft()) + totalLeavesHelp(cur->getRight());
}

int BSTree::totalLeaves(){
    return totalLeavesHelp(root);
}

int sumNodesHelp(Node* cur){
    if(cur == nullptr){
        return 0;
    }
    return sumNodesHelp(cur->getLeft()) + sumNodesHelp(cur->getRight()) + cur->getData();
}

int BSTree::sumNodes(){
    return sumNodesHelp(root);
}

int depthHelp(Node* cur, int height){
    if(cur == nullptr){
        return height;
    }
    return std::max(depthHelp(cur->getLeft(),height+1),depthHelp(cur->getRight(),height+1));
}

int BSTree::depth(){
    return depthHelp(root,0);
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

// std::string BSTree::debugString2(){
//     std::string ans;
//     Node* cur = root;
//     Node* left = root->getLeft();
//     Node* right = root->getRight();
//     for(int i = 0; i = depth(); i++){//root spacing
//         ans += "\t";
//     }
//     ans += "[" + std::to_string(cur->getData()) + "]";//place root
//     std::cout << ans;
//     for(int i = 0; i < depth(); i++){
//         for(int j = 0; j < i; j++){
//             ans += "\t";
//         }
//         ans += std::to_string(cur->getData());
//         for(int j = 0; j < i; j++){
//             ans += "\t";
//         }
//     }
//     return ans;
// }