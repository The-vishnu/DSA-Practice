#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> mp;
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]] = i;
    }

    for(int i = 0; i < nums.size(); i++){
        int sec = target - nums[i];
        if(mp.find(sec) != mp.end()){
            ans.push_back(i);
            ans.push_back(mp[sec]);
        }
    }

    return ans;
}
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;

    vector<int> result = twoSum(nums, target);
    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}