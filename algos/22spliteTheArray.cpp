#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool spliteTheArray(vector<int>& nums){
    unordered_map<int, int> mp;
    bool YesOrNo = false;
    for(auto it : nums){
        mp[it]++;
    }

    if(nums.size() % 2 == 0){

        for(auto it : mp){
            if(it.second < 3){
                YesOrNo = true;
            } else {
                return false;
            }
        }
    }

    if(YesOrNo){
        return true;
    }
    return false;

}

int main() {
    vector<int> nums = {1,2,2,2};

    if(spliteTheArray(nums)){
        cout <<"True";
    } else {
        cout <<"False";
    }

    return 0;
}