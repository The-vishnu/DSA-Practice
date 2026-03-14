#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minSubarray(vector<int>& nums, int k){
    int curr = 0;
    long long sum = 0;

    for (auto it : nums)
        sum += it;
    if(sum % k == 0) return 0;
    int target = sum % k;

    unordered_map<int, int> mp;
    mp[0] = -1;
    int len = nums.size();

    for (int i = 0; i < nums.size(); i++) {
        curr = (curr + nums[i])%k;
        int rem = (curr - target + k) % k;

        if (mp.count(rem)) {
            len = min(len, (i - mp[rem]));
        }
        mp[curr] = i;
    }

    return len == nums.size() ? -1 : len;
    
}

int main() {
    vector<int> nums = {3, 1, 4, 2};
    int k = 6;

    cout <<"output: " << minSubarray(nums, k);
    return 0;
}