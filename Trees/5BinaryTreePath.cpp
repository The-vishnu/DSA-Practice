#include <iostream>
#include <bits/stdc++.h>
#include "0TemplateofTree.cpp"
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void path(TreeNode* root, vector<string>& ans, string str) {
    if(root == NULL) return;

    str += to_string(root->data);

    if(root->left == NULL && root->right == NULL) {
        ans.push_back(str);
        return;
    }

    str += "->";

    path(root->left, ans, str);
    path(root->right, ans, str);
}

vector<string> pathOfTree(TreeNode* root) {
    vector<string> ans;

    if(root == NULL) return ans;

    path(root, ans, "");

    return ans;
}

int main() {
    TreeNode* root = NULL;
    root = BuildBinaryTree(root);

    vector<string> ans = pathOfTree(root);

    for(string it : ans){
        cout << it <<" ";
    }
    return 0;
}