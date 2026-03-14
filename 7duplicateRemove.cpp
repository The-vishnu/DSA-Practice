#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &arr, int &st, int en, int n){
    while(en < n){
        if(arr[st] != arr[en]){
            st++;
            arr[st] = arr[en];
            en++;
        }
        else {
            en++;
            
        }
    }
}

int main() {
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    int st = 0 , en = 1, n = arr.size();
    
    removeDuplicates(arr, st, en, n);

    for(int i = 0; i <= st; i++){
        cout << arr[i] <<" ";
    }


    return 0;
}