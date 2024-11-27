#include <bits/stdc++.h>
using namespace std;

 // Node class 
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

    Node(int data, Node* l, Node * r){
        data = data;
        left = l;
        right = r; 
    }

};

Node * root;
    //  insert function to add a Node in BST
Node * insertTree(Node * root, int val){
    if (root == NULL){
        return new Node(val);      // return new node as Root 
    }


    else if (val < root -> data){
        root -> left = insertTree(root -> left, val);
    }


    else if (val > root -> data){
        root -> right = insertTree(root -> right, val);
    }
    return root;
    
}
int main()
{
    
}
