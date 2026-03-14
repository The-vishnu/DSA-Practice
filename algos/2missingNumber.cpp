#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MissingNumberIs(vector<int> &arr){
    int n = arr.size();
    int ans = 0;

    for(int i = 0; i < arr.size() ; i++){
        ans += arr[i];
    }

    return (n*(n+1) /2)-ans;
}

int main() {
    vector<int> arr = {3, 0, 1};
    
    int ans = MissingNumberIs(arr);

    cout <<"The Missing Number is: " <<ans;
    return 0;
}