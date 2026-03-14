#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minimumCost(vector<int>& nums){
    sort(nums.begin()+1, nums.end());
    int sum = 0;

    for(int i = 0; i < 3; i++){
        sum = sum + nums[i];
    }

    return sum;
}
int main() {
    vector<int> nums = {5, 4, 3};

    cout <<"Minimum cost cost is: " << minimumCost(nums);

    return 0;
}