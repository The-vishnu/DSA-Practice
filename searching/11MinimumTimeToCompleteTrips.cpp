#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long totalTime(vector<int>& time, int mid){
    long long overAllTime = 0;

    for(int i = 0; i < time.size(); i++){
        overAllTime += mid/time[i];
    }
    return overAllTime;
}

long long minimumTime(vector<int>& time, int totalTrips){

    int low = 1, high = *min_element(begin(time), end(time))*totalTrips;
    long long ans = 1;
    while(low <= high){

        long long mid = low + (high - low)/2;

        if(totalTime(time, mid) >= totalTrips){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }

    return ans;
}

int main() {
    vector<int> time = {2};
    int totalTrips = 1;

    cout << endl;
    cout <<"output: " << minimumTime(time, totalTrips);
    return 0;
}