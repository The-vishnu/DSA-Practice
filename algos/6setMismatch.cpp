#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int>& nums){
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = 1, duplicate = -1, sum = 0, missing;

    for(int num : nums) sum = sum + num;

    while(j < n){

        if(nums[i] == nums[j]){
            duplicate = nums[i];
            break;
        }
        j++;
        i++;
    }

    missing = ((n * (n + 1)/2) - (sum - duplicate));

    ans.push_back(duplicate);
    ans.push_back(missing);

    return ans;
}
int main() {
    vector<int> nums = {1, 1};

    cout <<"priting array..." <<endl;
    vector<int> result = findErrorNums(nums);
    for(int ele : result){
        cout << ele <<" ";
    }
    return 0;
}