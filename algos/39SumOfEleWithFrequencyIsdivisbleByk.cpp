#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumDivisibleByK(vector<int> nums, int k){
    unordered_map<int, int> mp;
    int sum = 0;
    for(auto it : nums) mp[it]++;

    for(auto it : mp){
        if(it.second % k == 0) sum = sum + (it.first*it.second);
    }

    return sum;
}

int main() {
    vector<int> nums = {1,2,2,3,3,3,3,4};
    int k = 2;

    cout <<"Output: " << sumDivisibleByK(nums, k);
    return 0;
}