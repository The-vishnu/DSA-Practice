#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int> &arr, int st, int en){
    int ans = 0;
    long long mid = 0;

    while(st <= en){
        mid = (st + en) /2;

        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;

        else if(arr[mid] > arr[mid -1]){
            ans = mid;
            st = mid +1;
        } 
        else {
            ans = mid;
            en = mid -1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {3,5,3,2,0};
    int st = 0, en = arr.size() -1;

    int ans = peakElement(arr, st, en);

    cout <<"The peak is " << ans;
    return 0;
}