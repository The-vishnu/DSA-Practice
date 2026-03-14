#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {7, 4, 8, 5, 3};
    int n = arr.size();

    for(int i = 1; i < n; i++){

        for(int j = i; j > 0; j--){

            if(arr[j] < arr[j-1]) swap(arr[j], arr[j-1]);
            else break;
        }
    }

    for(int i = 0; i < n; i++){
        cout <<arr[i] <<" ";
    }
    return 0;
}