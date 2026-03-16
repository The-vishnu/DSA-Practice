#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> BeautifullArray(vector<int>& arr){
    stack<int> st;
    for(int i = 0; i < arr.size(); i++){
        if(!st.empty() && st.top() > 0 && arr[i] < 0) st.pop();
        else st.push(arr[i]);
    }

    vector<int> ans(st.size());
    int i = 0;
    while(!st.empty()){
        ans[i] = st.top();
        st.pop();
        i++;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = {2, 1, -4, 3, -5, 2, 6 ,-3};

    vector<int> ans = BeautifullArray(arr);

    for(auto it : ans){
        cout << it <<" ";
    }
    return 0;
}