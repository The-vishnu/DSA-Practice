#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& nums){
    unordered_map<int, int> mp;
    mp[0] = -1;
    int currSum = 0;
    int ans = 0;

    for(int i = 0; i < nums.size(); i++){
        currSum += (nums[i] == 0) ? -1 : 1;
        if(mp.count(currSum)){
            ans = max(ans, (i - mp[currSum]));
        }
        else{
            mp[currSum] = i;
        }

    }

    return ans;
}

int main() {
    vector<int> nums = {0,1,0,1};

    cout <<"Output: " <<findMaxLength(nums);
    return 0;
}