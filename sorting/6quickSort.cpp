#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr, int st, int en){
    
    int pos = st;

    for(int i = st; i < en; i++){
        if(arr[i] <= arr[en]){
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    swap(arr[pos], arr[en]);
    return pos;
}


void quickSort(vector<int> &arr, int st, int en){
    
    if(st < en){
        int pov = partition(arr, st, en);

        //for left half
        quickSort(arr, st, pov-1);

        //for right half
        quickSort(arr, pov+1, en);
    }
}

int main() {
    vector<int> arr = {10, 3, 4, 5, 1, 6, 3, 2, 11, 9};
    int en = arr.size() -1;
    int st = 0;

    quickSort(arr, st, en);
    cout <<"printing array: " <<endl;
    for(int i : arr){
        cout << i <<" ";
    }
    return 0;
}