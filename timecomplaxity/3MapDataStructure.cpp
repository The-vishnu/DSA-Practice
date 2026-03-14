#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> countFrequecy(vector<int>& nums){
    int sum = 0;
    map<int, int> mp;
    vector<int> freq;

    for(auto i : nums){
        mp[i]++;
    }

    for(auto j : mp){
        if(j.second == 1){
            sum = sum + j.first;
        }
    }
    cout <<"Sum of Distict Element: " << sum;
    return freq;
}

int main() {
    vector<int> nums = {1, 1};

    vector<int> freq = countFrequecy(nums);
    for(int ele : freq){
        cout << ele <<" ";
    }

    return 0;
}