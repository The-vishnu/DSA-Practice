#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1, 0, 1, 0, 1};
    int N = arr.size();
    int start = 0, end = N -1;

    while(start < end){
        if(arr[start] == 0){
            start++;
        } else {
            if(arr[end] == 0){
                swap(arr[start], arr[end]);
                start++, end--;
            } else {
                end--;
            }
        }
    }

    for(int i = 0; i < N; i++){
        cout <<arr[i] <<" ";
    }
    return 0;
}