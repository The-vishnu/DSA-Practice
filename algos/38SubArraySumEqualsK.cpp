#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subArraySumEqualsK(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    mp[0] = 1;
    int count = 0;
    int preSum = 0;

    for(auto it : nums){
        preSum += it;
        if(mp.count(preSum - k)){
            count += mp[preSum - k];
        }
        mp[preSum]++;
    }

    return count;


}

int main() {
    vector<int> nums = {1,1,1};
    int k = 2;

    cout <<"output: " << subArraySumEqualsK(nums, k);
    return 0;
}