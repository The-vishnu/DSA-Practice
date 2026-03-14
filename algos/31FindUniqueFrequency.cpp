#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstUniqueFreq(vector<int>& nums) {
    map<int, int> mp;
    unordered_map<int, int> mpCount;

    for(auto it : nums){
        mp[it]++;
    }

    for(auto it : mp){
        mpCount[it.second]++;
    }

    for(auto it : nums){
        if(mpCount[mp[it]] == 1) return it;
    }

    return -1;

    
}

int main() {
    vector<int> nums = {10,10,20,30,30};

    cout <<"Output: " << firstUniqueFreq(nums);
    return 0;
}