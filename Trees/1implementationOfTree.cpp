#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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

// using recursion
// TreeNode* BuildTree(TreeNode* &root){
//     cout <<"Enter the data: ";
//     int val;
//     cin >> val;

//     root = new TreeNode(val);

//     if(val == -1) return NULL;

//     cout <<"Enter the data inserting in left for " << val << endl;
//     root -> left = BuildTree(root -> left);

//     cout <<"Enter the data inserting in right for " << val << endl;
//     root -> right = BuildTree(root -> right);

//     return root;
// }

// using queue data structure

TreeNode* BuildTree(TreeNode* &root){
    int rootData;
    int first, second;

    queue<TreeNode*> qu;

    cout <<"Enter the root value: ";
    cin >> rootData;

    root = new TreeNode(rootData);
    qu.push(root);

    while(!qu.empty()){
        TreeNode* temp = qu.front();
        qu.pop();

        cout <<"Enter the left node for " << temp -> data << ": ";
        cin >> first;

        if(first != -1){
            temp -> left = new TreeNode(first);
            qu.push(temp -> left);;
        }

        cout <<"Enter the right node for " << temp -> data << ": ";
        cin >> second;

        if(second != -1){
            temp -> right = new TreeNode(second);
            qu.push(temp -> right);
        }
    }

}



int main() {
    TreeNode* root = NULL;

    root = BuildTree(root);
    
    return 0;
}