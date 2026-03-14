#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* BuildTree(Node* &root){
    cout <<"Enter the data: ";
    int val;
    cin >> val;

    root = new Node(val);

    if(val == -1) return NULL;

    cout <<"Entet the data inserting in left for " << val << endl;
    root -> left = BuildTree(root -> left);

    cout <<"Enter the data inserting in right for " << val << endl;
    root -> right = BuildTree(root -> right);

    return root;
}

int main() {
    Node* root = NULL;

    root = BuildTree(root);
    
    return 0;
}