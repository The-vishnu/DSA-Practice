#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {10, 10, 9};
    int i = 0, j = 1;
    int first_max = arr[i], sec_max = arr[j];

    if(arr[i] < arr[j]){
        first_max = arr[j];
        sec_max = arr[i];
        j++;
    } else {
        first_max = arr[i];
        sec_max = arr[j];
        j++;
    }

    while(j <= arr.size()){
        // cout <<"endless...";
        // cout <<"fisrt max: " <<first_max << endl;
        // cout <<"second max: " <<sec_max << endl;
        if(arr[j] < first_max && arr[j] < sec_max){
            j++;
        } 
        else if(arr[j] > first_max){
            sec_max = first_max;
            first_max = arr[j];
            j++;
        } else {
            if(arr[j] > sec_max && arr[j] < first_max){
                sec_max = arr[j];
                j++;
            }
        }
        // j++;
    }

    cout <<"second max element is: " << sec_max;
    return 0;
}