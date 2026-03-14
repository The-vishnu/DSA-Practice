#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& heights){
    int le = 0, ri = heights.size()-1;
    int h = INT_MAX;
    int w;
    int area;
    int ans = INT_MIN;

    while(le < ri){
        h = min(heights[le], heights[ri]);
        w = ri - le;
        area = h*w;
        ans = max(ans, area);
        heights[le] < heights[ri] ? le++ : ri--;
    }

    return ans;
}

int main() {
    vector<int> heights = {1,8,6,2,5,4,8,3,7};

    cout <<"The max area is: " << maxArea(heights);
    return 0;
}