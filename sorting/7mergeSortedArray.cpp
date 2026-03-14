#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr1, int m, vector<int> &arr2, int n){
    int in = m + n-1;
    int j = n -1;
    int i = m -1;

    while(i >= 0 && j >=0){
        if(arr1[i] <= arr2[j]){
            arr1[in] = arr2[j];
            in--;
            j--;
            
        }
        else{
            arr1[in] = arr1[i];
            i--;
            in--;
        }
    }

    while(j >= 0){
        arr1[in] = arr2[j];
        in--;
        j--;
    }

    
}
int main() {
    vector<int> arr1 = {0};
    vector<int> arr2 = {1};
    int m = 0, n = 1;

    merge(arr1, m, arr2, n);

    for(int i : arr1){
        cout << i <<" ";
    }

    return 0;
}