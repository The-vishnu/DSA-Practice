#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(vector<int>& nums, int target){
    int st = 0, en = 0;
    int n = nums.size();
    int sum = 0;
    int ans = INT_MAX;

    while(en < n){
        sum +=nums[en];

        while(sum >= target){
            ans = min(ans, en - st+1);
            sum -= nums[st++];
            
        }
        en++;
    }

    return ans == INT_MAX ? 0 : ans;
}

int main() {
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;

    cout <<"Output: " << minSubArrayLen(nums, target);
    return 0;
}