#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestArithmetic(vector<int>& nums){
    unordered_map<int, int> mp;

    for(int i = 1; i <= nums.size(); i++){
        mp[i] = nums[i]-nums[i-1];
    }

    for(auto it : mp){
        if(it.second != it.second+1){
            
        }
    }
}

int main() {
    vector<int> nums = {9,7,5,10,1};
    return 0;
}