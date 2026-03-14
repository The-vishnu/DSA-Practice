#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums){
    map<int, int> map;

    for(auto ele : nums){
        map[ele]++;
    }

    for(auto ele : map){
        if(ele.second >= 2){
            return true;
        }
    }

    return false;
}
int main() {
    vector<int> nums = {1, 2, 3, 4};

    bool res = containsDuplicate(nums);

    if(res){
        cout <<"True " << endl;
    }
    else{
        cout <<"False " <<endl;
    }
    return 0;
}