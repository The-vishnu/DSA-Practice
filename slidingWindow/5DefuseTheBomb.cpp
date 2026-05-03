#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<int> decrypt(vector<int>& code, int k){
    vector<int> ans(code.size(), 0);
    int n = code.size();
    if(k == 0) return ans;

    for(int i = 0; i < n; i++){
        if(k > 0){
            for(int j = 1; j <= k; j++){
                ans[i] += code[(i + j) % n];
            }
        }
        else if(k < 0){
            for(int j = 1; j <= abs(k); j++){
                ans[i] += code[(i - j + n) % n];
            }
        }
    }

    return ans;
}


int main() {
    vector<int> code = {5,7,1,4};
    int k = 3;

    vector<int> ans = decrypt(code, k);

    for(auto it : ans){
        cout << it <<" ";
    }
    return 0;
}