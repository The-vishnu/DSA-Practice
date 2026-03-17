#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> nums1, vector<int> nums2){
    unordered_map<int, int> mp;
    stack<int> st;
    for(int i = 0; i < nums2.size(); i++){

        while(!st.empty() && nums2[st.top()] < nums2[i]){
            mp[nums2[st.top()]] = nums2[i];
            st.pop();
        }
        st.push(i);
    }

    vector<int> ans(nums1.size(), -1);
    for(auto it : nums1){
        if(mp.count(it)){
            ans[it] = mp[it];
        }
    }

    return ans;

}

int main() {
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> ans = nextGreaterElement(nums1, nums2);

    for(auto it : ans){
        cout << it <<" ";
    }
    return 0;
}