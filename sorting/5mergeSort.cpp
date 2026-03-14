#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int st, int en, int mid){
    vector<int> temp;

    int left = st, right = mid+1;

    while(left <= mid && right <= en){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    //for left remaining
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    //for right rmaining 
    while(right <= en){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = 0; i < temp.size(); i++){
        arr[i+st] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int st, int en){
    long long mid = 0;
    if(st != en){
        mid = st + (en - st)/2;

        //for left half array
        mergeSort(arr, st, mid);

        //for right half array
        mergeSort(arr, mid+1, en);

        merge(arr, st, en, mid);
    }
}

int main() {
    vector<int> arr = {3, 5, 1, 3, 2, 8, 6};
    int n = arr.size() -1;
    int st = 0, en = n;

    mergeSort(arr, st, en);

    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}