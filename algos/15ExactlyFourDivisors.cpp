#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumOfFourDivisors(vector<int>& nums){
    map<int, int> mp;
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        cout <<" outer Loop started"<< endl;
        int count = 0;
        for(int j = 1; j * j < nums[i]; j++){
            cout << "inner loop started and heres is first ele "<<nums[i] << endl;
            if(j % nums[i] == 0){
                count++;
                sum += j;
                cout << sum << " and " << count << endl;
            }
        }
        if(count == 4) mp[sum] = count;
        for(auto el : mp){
            if(el.second == 4){
                cout << el.first << " : " << el.second << endl;
                sum += el.first;
            }
        }
    }
    cout <<" before Returning : " << sum << endl;
    return sum;
}
int main() {
    vector<int> nums = {21, 4, 7};
    cout <<"sum of Exactly Four Divisors: "<<sumOfFourDivisors(nums) << endl;
    return 0;
}