#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> ProductOfEleExpectSelf(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n, 1);
    for(int i = 1; i < n; i++){
        ans[i] = ans[i-1] * nums[i-1];
        cout << ans[i] << endl;
    }

    int self = 1;
    for(int i = n-2; i >= 0; i--){
        self *= nums[i+1];
        ans[i] *= self;
        cout << ans[i] << endl;
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] <<" ";
    }

    return ans;
}

int main() {
    vector<int> nums = {1,2,3,4};

    vector<int> re = ProductOfEleExpectSelf(nums);

    for(auto it : re){
        cout << it <<" ";
    }
    return 0;
}