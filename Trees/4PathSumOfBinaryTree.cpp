#include <iostream>
#include <bits/stdc++.h>
#include "0TemplateofTree.cpp"
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool findPathSum(TreeNode* root, int target, int &pathSum){
    if(root == NULL) return false;

    pathSum += root -> data;
    if(root -> left == NULL && root -> right) {
        if(pathSum == target) return true;
    }
    bool left = findPathSum(root -> left, target, pathSum);
    bool right = findPathSum(root -> right, target, pathSum);

    return left || right;
}

bool hasPathSum(TreeNode* root, int &targetSum){;
    int pathSum = 0;
        
    findPathSum(root, targetSum, pathSum);

    return findPathSum(root, targetSum, pathSum);


}

int main() {
    TreeNode* root = NULL;
    int targetSum = 22;
    root = BuildBinaryTree(root);
    return 0;
}