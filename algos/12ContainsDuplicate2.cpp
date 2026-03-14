#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums, int k){
    map<int, int> mp;
    
    for(int i = 0; i < nums.size(); i++){
        if(mp.count(nums[i])){

            if(abs(i - mp.count(nums[i])) <= k){
                return true;
            }
        }
        mp[nums[i]] = i;
        cout <<mp[nums[i]] << endl;
    }


    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1}; 
    int k = 3;
    bool res = containsDuplicate(nums, k);
    if(res){
        cout <<"True " << endl;
    }
    else{
        cout <<"False " <<endl;
    }
    return 0;
}