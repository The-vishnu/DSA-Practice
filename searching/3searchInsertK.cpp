#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int searchInsertK(vector<int> &arr, int st, int en, int target){
    long long mid = 0;
    int index = en +1;;

    while(st <= en){
        mid = st + (en - st)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            index = mid;
            en = mid -1;
        } 
        else {
            st = mid +1;
        }
    }

    return index;
}

int main() {
    vector<int> arr = {1, 4, 6, 8, 10, 14};
    int st = 0, en = arr.size() -1;
    int target = 9;

    int ans = searchInsertK(arr, st, en, target);

    cout <<"the Correct possition will be: " << ans;

    return 0;
}