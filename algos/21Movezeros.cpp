#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector<int>& nums){
    int i = 0, j = 1; 

    while(i < nums.size()-2){
        if(nums.size() == 1){
            return;
        }
        if(nums[i] == 0){
            if(nums[j] == 0){
                j++;
            }
            else {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
    }
}

int main() {
    vector<int> nums = {0};

    cout <<"Array before operation: " << endl;
    for(auto it : nums){
        cout << it <<" ";
    }

    cout << endl;

    moveZeros(nums);
    cout <<"Array after operation: " << endl;
    for(auto it : nums){
        cout << it <<" ";
    }


    return 0;
}