#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    for(int i = 0; i < nums.size(); i++){
        
        if(mp.count(nums[i])){
            if(abs(i - mp[nums[i]]) <= k){
                return true;
            }
        }
        mp[nums[i]] = i;
    }

    return false;
        
}

int main() {
    vector<int> nums = {1,2,3,1,2,3};

    int k = 2;
    if(containsNearbyDuplicate(nums, k)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}