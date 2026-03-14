#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumOfUnique(vector<int>& nums) {
    int n = nums.size();
    int sum = 0, count = 0;
    int totalSum = 0;

    map<int, int> sameNum;


    //optimal approch

    for(auto i : nums){
        sameNum[i]++;
    }

    for(auto j : sameNum){
        if(j.second == 1){
            sum = sum+ j.first;
        }
    }

    return sum;

    // brute force approch

    // sort(nums.begin(), nums.end());
    // int i = 0, j = 1;

    // for(int i = 0; i < n; i++){
    //     totalSum = totalSum + nums[i];
    // }

    // while(j < n){
    //     if(nums[i] != nums[j]){
    //         j++;
    //         i++;
    //     }
    //     else{
    //         j++;
    //         if(nums[i] != nums[j]){
    //             j--;
    //             while(i <= j){
    //                 sum = sum + nums[i];
    //                 i++;
    //             }
    //         }
    //     }
    // }
    // return totalSum - sum;








}

int main() {
    vector<int> nums = {1,2,3,4,5};

    int res = sumOfUnique(nums);

    cout << "sum of unique number is " << res;
    return 0;
}