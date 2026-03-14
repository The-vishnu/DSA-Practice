#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> intervals){
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());

    for(int i = 0; i < intervals.size(); i++){
        if (ans.empty()){
            ans.push_back(intervals[0]);
        }
        else if(ans.back()[1] >= intervals[i][0]){
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
        else{
            ans.push_back(intervals[i]);
        }
        
    }

    return ans;
}

int main() {
    vector<vector<int>> intervals = {
        {1,3},
        {2,6},
        {8,10},
        {15,18}
    };

    vector<vector<int>> res = merge(intervals);

    for(int i = 0; i < res.size(); i++){
        cout << res[i][0] << " " << res[i][1] << endl;
    }

    return 0;
}