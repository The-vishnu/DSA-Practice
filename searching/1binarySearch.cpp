#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    int n = arr.size();
    int start = 0, end = n, mid, key = 5;
    mid = start + (end - start) / 2;

    while(start < end){
        if(arr[mid] == key){
            cout <<"yes i am present...!" << endl;
        }
        if(arr[mid] < key){
            start = mid +1;
        } else {
            end = mid -1;
        }

        mid = start + (end - start) / 2;
    }

    return 0;
}