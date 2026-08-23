#include <iostream>
#include <bits/stdc++.h>
#include "0TemplateofTree.cpp"
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<vector<int>> levelOrder(TreeNode* root){
    queue<TreeNode*> qu;
    vector<vector<int>> ans;
    qu.push(root);

    while(!qu.empty()){
        int size = qu.size();
        vector<int> level;

        for(int i = 0; i < size; i++){
            TreeNode* temp = qu.front();
            qu.pop();

            level.push_back(temp -> data);
            if(temp -> left != NULL) qu.push(temp -> left);
            if(temp -> right != NULL) qu.push(temp -> right);
        }
        ans.push_back(level);
    }
    return ans;
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
    root = BuildBinaryTree(root);

    vector<vector<int>> result = levelOrder(root);

    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[i].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}