#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


vector<int> merged(vector<int> &nums1, vector<int> &nums2){
    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i < nums1.size() || j < nums2.size()){

        if(i < nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        else if(i < nums1.size()){
            ans.push_back(nums1[i]);
            i++;
        }
        else {
            ans.push_back(nums2[j]);
            j++;
        }

    }
    return ans;
}

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2){
    vector<int> ans = merged(nums1, nums2);
    int low = 0;
    int high = ans.size();
    long long mid;
    if(ans.size() %2 == 0){

        mid = low + (high - low)/2;
        long long a = ans[mid - 1];
        long long b = ans[mid];

        return double(a + b) / 2;
    }
    else {
        mid = low + (high - low)/2;

        return double(ans[mid]);
    }

    return 0.0;


}



int main() {
fastio();
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    cout << findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}