#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MinimumRemove(vector<int>& nums, int k){
    int n = nums.size();
    int minEle = 0, maxEle = 1;
    int length = INT_MIN;

    sort(nums.begin(), nums.end());
    while(maxEle <= n){
        if(nums[maxEle] <= (long long)nums[minEle]*k){
            length = max(length, maxEle - minEle+1);
            maxEle++;
        }
        else{
            minEle++;
            maxEle++;
        }
    }

    return n - length;

}

int main() {
    vector<int> nums = {1,6,2,9};

    int k = 3;

    cout <<"minimum remove is: " << MinimumRemove(nums, k);

    return 0;
}