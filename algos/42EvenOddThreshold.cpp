#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestAlternatingSubarray(vector<int>& nums, int threshold){
    int left = 0, right = 1;
    int ans = 0;
    int i = 0;
    if(nums.size() == 1 && nums[0]%2 == 0 && nums[0] <= threshold) return nums.size();
    while(right < nums.size() && i < nums.size()){
        if(nums[i] %2 == 0 && nums[i] <= threshold){
            left = i;
        }
        else {
            i++;
            continue;
        }

        if(nums[right]%2 != nums[right-1]%2 && nums[right] <= threshold){
            cout << nums[right]%2 <<" " << nums[right-1]%2 << endl;
            ans = max(ans, (right - left+1));
        }
        else i = right;
        right++;

        

    }

    return ans;
}

int main() {
    vector<int> nums = {2,2};
    int threshold = 18;

    cout <<"Output: " << longestAlternatingSubarray(nums, threshold);
    return 0;
}