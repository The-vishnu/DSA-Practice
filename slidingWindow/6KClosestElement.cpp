#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int findIndx(vector<int> arr, int x){
    int st = 0;
    int en = arr.size()-1;
    int ans = arr.size();
    int mid;
    while(st <= en){
    
        mid = st + (en - st)/2;
        if(arr[mid] >= x){
            ans = mid;
            en = mid-1;
        }
        else st = mid+1;
    }

    return ans;
}

vector<int> findClosestElements(vector<int>& arr, int k, int x){
    int n = arr.size();
    int high = findIndx(arr, x);;
    int low = high-1;

    vector<int> ans;

    while(low >= 0 && high < n && k > 1){
        if(abs(arr[low] - x) <= abs(arr[high] - x)) low--;
        else high++;
        k--;
    }

    while(k > 0 && low >= 0){
        low--;
        k--;
    }

    while(k > 0 && high < n){
        high++;
        k--;
    }

    for(int i = low+1; i < high; i++){
        ans.push_back(arr[i]);
    }
    return ans;
}

int main() {
    vector<int> arr = {3, 5, 8, 10};
    int k = 2, x = 15;

    vector<int> ans = findClosestElements(arr, k, x);

    for(auto it : ans){
        cout << it <<" ";
    }
    return 0;
}