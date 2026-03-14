#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void RotateArray(vector<int>& nums, int k){
    int n = nums.size()-1;

    reverse(nums.begin(), nums.end()-k);
    reverse(nums.begin()+n-k+1, nums.end());
    reverse(nums.begin(), nums.end());


}


int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k;

    cout <<"Enter the Rotation: ";
    cin >> k;

    RotateArray(nums, k);

    for(auto i : nums){
        cout << i <<" ";
    }

    return 0;
}