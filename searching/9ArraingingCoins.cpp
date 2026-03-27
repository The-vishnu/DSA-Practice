#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// constructing stairs for understanding
vector<int> ConstructStairs(int n){
    vector<int> stairs;

    for(int i = 0; n > 0; i++){
        if(i == 0){
            stairs.push_back(i+1);
        }
        else if(stairs[i-1] < n){
            stairs.push_back(i+1);
        }
        else {
            stairs.push_back(n);
        }
        n -= i+1;
    }

    return stairs;

}

int arrangeCoins(int n){

    long long left = 0, right = n;
    int ans = 1;
    while(left <= right){
        long long mid = left + (right - left)/2;
        long long prifxSum = mid * (mid+1)/2;

        if(prifxSum <= n){
            ans = mid;
            left = mid+1;
        }
        else right = mid-1;

    }

    return ans;














    // approch 1 this will run but fials in some cases 
    // vector<int> stairs = ConstructStairs(n);

    // int left = 0, right = stairs.size()-1;
    // if(n < 4) return n-1;

    // while(left <= right){

    //     int mid = left + (right - left)/2;

    //     if(stairs[mid] >= stairs[mid-1] && stairs[mid] >= stairs[mid+1]) return mid+1;

    //     else if(stairs[mid] >= stairs[mid-1] && stairs[mid] <= stairs[mid+1]) left = mid;

    // }
    // return 0;
}

int main() {
    int n = 5;
    cout <<"Output: " << arrangeCoins(n);
    return 0;
}