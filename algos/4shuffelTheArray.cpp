#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& arr, int n){
    int i = 0, j = n;
    vector<int> ans;

    while(i < n){
        ans.push_back(arr[i]);
        ans.push_back(arr[j]);
        i++;
        j++;
    }

    return ans;
}

int main() {
    vector<int> arr = {2,5,1,3,4,7};
    int n = arr.size()/2;

    vector<int> result = shuffle(arr, n);

    for(int num : result){
        cout << num << " ";
    }
    return 0;
}