#include <iostream>
#include <bits/stdc++.h>
#include "0TemplateofTree.cpp"
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void solve(TreeNode* root, vector<int> &ans, int level){
    if(root == NULL) return;

    if(level == ans.size()){
        ans.push_back(root -> data);
    }

    solve(root -> right, ans, level+1);
    solve(root -> left, ans, level+1);
}

vector<int> rightView(TreeNode* root){
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}


int main() {
    TreeNode* root;
    root = BuildBinaryTree(root);

    vector<int> ans = rightView(root);

    for(auto it : ans){
        cout << it << " ";
    }

    return 0;
}