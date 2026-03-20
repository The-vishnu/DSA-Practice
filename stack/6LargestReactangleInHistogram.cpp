#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights){
    int ans = 0;
    int n = heights.size();

    stack<int> stLeft;
    stack<int> stRight;

    vector<int> right(n, n);
    vector<int> left(n, -1);

    for(int i = 0, j = n-1; i < n && j >= 0; i++, j--){
        while(!stLeft.empty() && heights[stLeft.top()] >= heights[i]){
            right[stLeft.top()] = i;
            stLeft.pop();
        }
        stLeft.push(i);

        while(!stRight.empty() && heights[stRight.top()] >= heights[j]){
            left[stRight.top()] = j;
            stRight.pop();
        }
        stRight.push(j);
    }

    for(int i = 0; i < n; i++){
        int width = right[i]-left[i]-1;
        ans = max(ans, heights[i]*width);
    }

    return ans;
}

int main() {
    vector<int> heights = {1,1};

    cout << endl;
    cout <<"output: "<< largestRectangleArea(heights) << endl;
    return 0;
}