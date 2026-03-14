#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findShortesArray(vector<int> &nums){
    unordered_map<int, vector<int>> mp;
    int ans = INT_MAX;
    int len = 0;
    for(int i = 0; i < nums.size(); i++){
        if(mp.count(nums[i]) == 0){
            mp[nums[i]] = {1, i, i};
        } else {
            mp[nums[i]][0]++;
            mp[nums[i]][2] = i;
        }
    }

    int degree = 0;

    for(auto it : mp){
        degree = max(degree, it.second[0]);
    }

    for(auto it : mp){
        if(it.second[0] == degree){
            len = it.second[2] - it.second[1] +1;
            ans = min(ans, len);
        }
    }

    if(ans == INT_MAX){
        return 1;
    } else {
        return ans;
    }

}

int main() {
    vector<int> nums = {1,1,1,1,2,2,2};

    cout <<"Output: " << findShortesArray(nums);
    return 0;
}