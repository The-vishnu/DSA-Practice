#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int numSubarrayProductLessThanK(vector<int>& nums, int k){
    int i = 0, j = 0;
    long long prod = 1;
    int ans = 0;
    
    while(j < nums.size()){
        prod = prod * nums[j];

        while(prod >= k && i <= j){
            prod = prod / nums[i];
            i++;
        }
        
        ans += (j - i) +1;
        j++;
    }

    return ans;
}

int main() {
    vector<int> nums = {10, 5, 2, 6};
    int k = 100;

    cout <<"Output: " << numSubarrayProductLessThanK(nums, k);
    return 0;
}