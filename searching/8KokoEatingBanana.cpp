#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool canEate(vector<int>& piles, int mid, int h){

    int actuHur = 0;

    for(auto it: piles){
        actuHur += it / mid;

        if(it % mid != 0) ++actuHur;
    }

    return actuHur <= h;
}

int minEatingSpeed(vector<int>& piles, int h){
    int low = 1, high = *max_element(piles.begin(), piles.end());
    int mid = 0;

    while(low < high){
        mid = low + (high - low)/2;

        if(canEate(piles, mid, h)){
            high = mid;
        }
        else low = mid+1;
    }

    return low;
}

int main() {
    vector<int> piles = {30,11,23,4,20};
    int h = 5;

    cout <<"Output: " <<minEatingSpeed(piles, h);
    return 0;
}