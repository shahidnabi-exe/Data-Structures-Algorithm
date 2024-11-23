
#include <bits/stdc++.h>
using namespace std;

class Node {
    
    public:
    int  data;
    Node* right;
    Node* left;

    public:
    Node(int data){
        data = data;
        left = NULL;
        right = NULL;
    }

};

Node * root;

Node * insertTree(Node * root, int val){
    if (root == NULL){
        return new Node(val);
    }

    else if (val < root -> data){
        root -> left = insertTree(root -> left, val);
    }

    else if (val > root -> data){
        root -> right = insertTree(root -> right, val);
    }
    return root;
}
