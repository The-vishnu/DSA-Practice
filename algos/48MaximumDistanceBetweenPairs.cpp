#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxDistance(vector<int> &nums1, vector<int> &nums2){
    int i = 0;
    int j = 0;

    int ans = 0;
    while(i < nums1.size() && j < nums2.size()){

        if(nums1[i] <= nums2[j]){
            ans = max(ans, j - i);
            j++;
        }
        else i++;
    }

    return ans;
}

int main() {
    vector<int> nums1 = {2,2,2};
    vector<int> nums2 = {10,10,1};


    cout <<"Output: " << maxDistance(nums1, nums2);
    return 0;
}