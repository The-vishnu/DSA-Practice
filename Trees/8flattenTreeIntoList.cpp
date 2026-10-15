#include <iostream>
#include <bits/stdc++.h>
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#include "0TemplateofTree.cpp"
using namespace std;

void flatten(TreeNode* root){
    if(root == NULL) return;

    flatten(root -> left);
    flatten(root -> right);

    TreeNode* temp = root -> right;
    root -> right = root -> left;
    root -> left = NULL;
    TreeNode* curr = root;
    while(curr -> right != NULL){
        curr = curr -> right;
    }
    curr -> right = temp;

}

TreeNode* print(TreeNode* root){
    if(root == NULL) return NULL;

    cout << root -> data << " ";
    print(root -> right);
}

int main() {
    TreeNode* root = NULL;
    root = BuildBinaryTree(root);

    flatten(root);
    print(root);


    return 0;
}