#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool canShipPackege(vector<int>& weights, int mid, int days){
    long long totalCapacity = 0;
    long long totalDays = 1;

    for(auto it : weights){

        if(totalCapacity + it <= mid){
            totalCapacity += it;
        }
        else {
            totalDays++;
            totalCapacity = it;
        }
    }



    // cout << totalCapacity << " " << totalDays << endl;
    return totalDays <= days;
}

int shipWithinDays(vector<int>& weights, int days) {
    int low = *max_element(begin(weights), end(weights));
    int high = accumulate(begin(weights), end(weights), 0);

    cout << high << endl;

    int ans = low;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(canShipPackege(weights, mid, days)){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    
    return ans;
}



int main() {
    vector<int> weights = {3,2,2,4,1,4};
    int days = 3;

    cout << endl;
    cout <<"output: " << shipWithinDays(weights, days);
    return 0;
}