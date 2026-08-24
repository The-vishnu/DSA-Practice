#include <iostream>
#include <bits/stdc++.h>
#include "0TemplateofTree.cpp"
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void left(TreeNode* root, int &ans){
    if(root == NULL) return;

    if(root -> left != NULL && root -> left -> left == NULL && root -> left -> right == NULL){
        ans += root -> left -> data;
    }
    left(root -> left, ans);
    left(root -> right, ans);

}

int leftLeaves(TreeNode* root){
    if(root == NULL) return 0;
    int ans = 0;

    left(root, ans);

    return ans;
}

int main() {
    TreeNode* root = NULL;
    root = BuildBinaryTree(root);
    
    int ans = leftLeaves(root);

    cout << "answer: " << ans;

    return 0;
}