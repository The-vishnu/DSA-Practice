#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> ans;
    int ind;

    for(int i = 0; i < nums.size(); i++){
        ind = abs(nums[i]);
        if(nums[ind-1] > 0){
            nums[ind-1] = -nums[ind-1];
        }
    }

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > 0){
            ans.push_back(i+1);
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> result = findDisappearedNumbers(nums);

    for(int num : result){
        cout << num <<" ";
    }
    
    return 0;
}