#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

class TreeNode {
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

TreeNode* BuildBinaryTree(TreeNode* &root){
    int data;
    cin >> data;

    TreeNode* newNode = new TreeNode(data);

    if(data == -1) return NULL;

    cout <<"Enter the left node for " << data << ": ";
    newNode -> left = BuildBinaryTree(newNode -> left);

    cout <<"Enter the right node for " << data << ": ";
    newNode -> right = BuildBinaryTree(newNode -> right);

    return newNode;
}