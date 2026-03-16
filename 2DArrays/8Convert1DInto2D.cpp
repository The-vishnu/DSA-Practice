#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> construct2DArray(vector<int> nums, int m, int n){
    int j = 0, k = 0;
    vector<vector<int>> ans(m, vector<int>(n, 0));
    for(int i = 0; i < nums.size(); i++){
        if(k < n){
            ans[j][k++] = nums[i];
            
        }
        else {
            k = 0;
            ans[++j][k++] = nums[i];
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int m = 3, n = 3;

    vector<vector<int>> res = construct2DArray(nums, m, n);
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << res[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}