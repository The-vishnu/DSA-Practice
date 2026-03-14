#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int searchInRotatedArray(vector<int> &arr, int st, int en, int target){
    long long mid;

    while(st <= en){
        mid = st + (en - st)/2;

        if(arr[mid] == target) return mid;
        else if(arr[mid] >= arr[st]){
            if(arr[st] <= target && target <= arr[mid]){
                en = mid -1;
            }
            else {
                st = mid +1;
            }
        }
        else {
            if(arr[mid +1] <= target && target <= arr[en]){
                st = mid +1;
            }
            else {
                en = mid -1;
            }
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    int st = 0, en = arr.size() -1, target = 3;
    int ans = searchInRotatedArray(arr, st, en, target);

    cout <<"Target is present at index " << ans;
    return 0;
}