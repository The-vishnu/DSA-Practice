#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums){
    vector<int> ans;
    int n = nums.size();

    for(int i = 0; i < n; i++){

        int count = 0;
        for(int j = 0; j < n; j++){

            if(nums[j] < nums[i]){
                count++;
            }
        }
        ans.push_back(count);
    }

    return ans;
}

int main() {
    vector<int> nums = {6,5,4,8};

    vector<int> result = smallerNumbersThanCurrent(nums);

    for(int num : result){
        cout << num <<" ";
    }
    return 0;
}