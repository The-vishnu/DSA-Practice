#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1, 3, 0, 2};
    int n = arr.size() -1;
    // cout <<n;
    for(int i = 0; i < n; i++){
        int index = i;

        for(int j = i+1; j < n+1; j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }


    for(int i = 0; i <= n; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}