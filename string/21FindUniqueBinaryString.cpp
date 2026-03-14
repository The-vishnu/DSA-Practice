#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string findDifferentBinaryString(vector<string>& nums){
    set<string> pres;
    int n = nums.size();
    int bit = n*n;
    for(int i = 0; i < n; i++){
        pres.insert(nums[i]);
    }

    for(int i = 0; i < bit; i++){
        bitset<16> bs(i);
        string s = bs.to_string();
        if(!pres.count(s.substr(16-n, n))) return s.substr(16-n, n);
        
    }
    return "1";

}

int main() {
    vector<string> nums = {"0"};

    cout <<"Output: " << findDifferentBinaryString(nums);
    return 0;
}