#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &arr, int n){

    for(int i = n; i >= 0; i--){

        if(arr[i] < 9){
            arr[i]++;
            return arr;
        }
        else {
            arr[i] = 0;
        }
    }
    arr.push_back(0);
    arr[0] = 1;

    return arr;
}

int main() {
    vector<int> arr = {9, 9, 9};
    int n = arr.size();

    vector<int> result = plusOne(arr, n -1);   
    for(int i : result){
        cout << i <<" ";
    }

    return 0;
}