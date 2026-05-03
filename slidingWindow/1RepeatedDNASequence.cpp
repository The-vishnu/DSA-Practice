#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<string> findSequence(string s){
    unordered_map<string, int> st;
    vector<string> dupStr;

    for(int i = 0; i < s.size() - 9; i++){
        string subStr = s.substr(i, 10);
        st[subStr]++;
        if(st[subStr] == 2){
            dupStr.push_back(subStr);
        }
    }

    return dupStr;
}

int main() {
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";

    vector<string> res = findSequence(s);

    for(int i = 0; i < res.size(); i++){
        cout << res[i] <<" ";
    }
    return 0;
}