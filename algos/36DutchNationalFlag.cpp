#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums){
    int low = 0, mid = 0, high = nums.size()-1;

    while(mid <= high){
        if(nums[mid] == 2){
            swap(nums[mid], nums[high]);
            high--;
        }
        else if(nums[mid] == 0){
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid] == 1) mid++;
    }
}

int main() {
    vector<int> nums = {2,0,2,0,1,0,1,2};

    sortColors(nums);

    for(auto it : nums){
        cout << it <<" ";
    }

    return 0;
}