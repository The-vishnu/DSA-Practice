#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {7, 4, 8, 5, 3};
    int n = arr.size();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    
    }


    for(int i : arr){
        cout << i << " ";
    }

    return 0;
}