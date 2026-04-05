#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool canPerformTask(vector<int>& tasks, long long mid, int h){
    long long totalHour = 0;

    for(auto it : tasks){
        totalHour += (it + mid -1) / mid;
    }

    return totalHour <= h;
}

long long minimumSpeed(vector<int>& tasks, int h){
    long long low = 1;
    long long high = *max_element(tasks.begin(), tasks.end());
    long long ans = 1;

    while(low  <= high){
        long long mid = low + (high - low)/2;

        if(canPerformTask(tasks, mid, h)){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }

    return ans;

}

int main() {
    vector<int> tasks = {3, 6, 7, 11};
    int h = 8;

    cout << endl;
    cout <<"output: " << minimumSpeed(tasks, h);
    return 0;
}