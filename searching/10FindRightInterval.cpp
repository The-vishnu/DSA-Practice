#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> ConstructBlocks(vector<vector<int>>& intervals){
    vector<pair<int, int>> inter;

    for(int i = 0; i < intervals.size(); i++){
        int ind = intervals[i][0];
        inter.push_back({ind, i});
    }

    sort(inter.begin(), inter.end());

    return inter;
}

vector<int> findRightInterval(vector<vector<int>>& intervals){
    if(intervals.size() == 1) return {-1};
    
    vector<int> ans(intervals.size(), -1);

    vector<pair<int, int>> inter = ConstructBlocks(intervals);

    
    for(int i = 0; i < intervals.size(); i++){
        int low = 0, high = inter.size()-1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(inter[mid].first >= intervals[i][1]){
                ans[i] = inter[mid].second;
                high = mid-1;
            }
            else low = mid +1;
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> intervals = {{1,4}};

    vector<int> ans = findRightInterval(intervals);

    for(auto it : ans){
        cout << it <<" ";
    }
    return 0;
}