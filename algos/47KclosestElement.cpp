#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int search(vector<int>& nums, int x){
    int low = 0, high = nums.size();
    
    int mid;
    while(low <= high){
        mid = low + (high - low)/2;
    
        if(x <= nums[mid]) high = mid - 1;
        else low = mid + 1;
    }

    return low;
}

vector<int> closetEle(vector<int>& nums, int k, int x){
    int left = search(nums, x)-1;
    int right = search(nums, x);

    vector<int> res;
    for(int i = 0; i < k; i++){
        if(abs(x - nums[left]) == abs(x - nums[right])){
            res.push_back(nums[left]);
            left--;
        }
        else if(left > 0 && abs(x - nums[left]) < abs(x - nums[right])){
            res.push_back(nums[left]);
            left--;
        }
        else if(right < nums.size() && abs(x - nums[right]) < abs(x - nums[left])){
            res.push_back(nums[right]);
            right++;
        }
    }

    sort(res.begin(), res.end());
    return res;



}

int main() {
    vector<int> arr = {1,2,3,4,5};
    int k = 4;
    int x = 3;

    vector<int> ans = closetEle(arr, k, x);

    for(auto it : ans){
        cout << it <<" ";
    }
    return 0;
}