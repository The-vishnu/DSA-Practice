#include <iostream>
#include <bits/stdc++.h>
#include "0TemplateofTree.cpp"
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void inOrderTraversal(TreeNode* root){
    if(root == NULL) return;

    inOrderTraversal(root -> left);
    cout << root -> data << " ";
    inOrderTraversal(root -> right);
}

void preOrderTraversal(TreeNode* root){
    if(root == NULL) return;

    cout << root -> data << " ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}

void postOrderTraversal(TreeNode* root){
    if(root == NULL) return;

    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout << root -> data << " ";
}

void levelOrderTraversal(TreeNode* root){
    if(root == NULL) return;

    queue<TreeNode*> qu;
    qu.push(root);

    while(!qu.empty()){
        TreeNode* temp = qu.front();
        qu.pop();

        cout << temp -> data << " ";

        if(temp -> left != NULL) qu.push(temp -> left);
        if(temp -> right != NULL) qu.push(temp -> right);
    }
}


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

int main() {
    TreeNode* root = NULL;
    cout << "Enter the root node: ";
    root = BuildBinaryTree(root);

    cout << endl;
    cout << "In-order traversal: ";
    inOrderTraversal(root);

    cout << endl;
    cout << "Pre-order traversal: ";
    preOrderTraversal(root);

    cout << endl;
    cout << "Post-order traversal: ";
    postOrderTraversal(root);

    cout << endl;
    cout << "Level-order traversal: ";
    levelOrderTraversal(root);
    return 0;
}