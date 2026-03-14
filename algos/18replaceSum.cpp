#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int replacePairSum(vector<int> &arr){
    int count = 0;
    map<int,int> mp;

    for(int i = 0; i < arr.size() -1; i++){

        if(arr[i] > arr[i+1]){
            int sum = 0;
            sum = arr[i] + arr[i+1];
            mp[sum] = i;
        }
    }
}

int main() {
    vector<int> arr = {5, 2, 3, 1};

    int ans = replacePairSum(arr);

    cout <<"Minimum operations: " << ans;

    return 0;
}