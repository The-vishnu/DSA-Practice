#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2){
    vector<int> ans;
    unordered_map<int, int> mp;
    int i = 0, j = 0;

    for(auto it :nums2){
        mp[it]++;
    }

    for(auto it : nums1){
        if(mp.count(it)){
            ans.push_back(it);
            mp.erase(it);
        }
    }


    return ans;

}

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> result = intersection(nums1, nums2);

    cout <<"Result: ";
    for(auto it : result){
        cout << it <<" ";
    }

    return 0;
}