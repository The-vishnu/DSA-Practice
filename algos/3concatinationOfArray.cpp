#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans;
    int n = nums.size();

    for(int i = 0; i < 2; i++){

        for(int num : nums){
             ans.push_back(num);
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1,2,1};

    vector<int> result = getConcatenation(nums);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}