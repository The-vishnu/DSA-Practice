#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &arr, int &st, int en, int val){

    while(st <= en){
        if(arr[st] != val){
            st++;
        }
        else{
            if(arr[en] != val){
                arr[st] = arr[en];
                en--;
                st++;
            }
            else{
                en--;
            }
        }
    }
    return st +1;
}

int main() {
    vector<int> arr = { 0,1,2,2,3,0,4,2 };
    int st = 0, n = arr.size() -1, en = n;
    int val = 2;
    
    int ans = removeElement(arr, st, en, val);

    for(int i = 0; i < st; i++){
        cout << arr[i] <<" ";
    }
    
    return 0;
}