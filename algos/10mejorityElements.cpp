#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<int> majorityElement2(vector<int>& nums){
    int ele1 = 0, ele2 = 0, freq1 = 0, freq2 = 0;
    vector<int> ans;

    for(auto it : nums){
        if(freq1 == 0 && ele2 != it){
            ele1 = it;
            freq1++;
        }
        else if(freq2 == 0 && ele1 != it){
            ele2 = it;
            freq2++;
        }
        else if(ele1 == it){
            freq1++;
        }
        else if(ele2 == it){
            freq2++;
        }
        else{
            freq1--;
            freq2--;
        }
    }
    freq1 = 0, freq2 = 0;
    for(auto it : nums){
        if(ele1 == it){
            freq1++;
        }
        else if(ele2 == it){
            freq2++;
        }
    }
    if(freq1 > nums.size()/3) ans.push_back(ele1);
    if(freq2 > nums.size()/3) ans.push_back(ele2);

    return ans;

}

int majorityElement(vector<int>& nums){
    unordered_map<int, int> map;
    int maxCount = 0;

    for(auto ele : nums){
        map[ele]++;
    }

    for(auto ele : map){
        if(ele.second > nums.size()/2){
            return ele.first;
        }
    }
    return -1;
}
int main() {
    vector<int> nums = {1, 2};

    int res = majorityElement(nums);
    vector<int> result = majorityElement2(nums);

    cout << res << endl;

    cout <<"Another approch: " << endl;
    for(auto it : result){
        cout << it <<" ";
    }
    return 0;
}