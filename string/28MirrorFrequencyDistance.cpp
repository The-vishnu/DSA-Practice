#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mirrorFreq(string s){
    vector<int> st(26, 0);
    vector<int> num(10, 0);
    for(char it : s){

        if(isdigit(it)){
            num[it - '0']++;
        }
        else if(isalpha(it)){
            st[tolower(it) - 'a']++;
        }
    }
    int ans = 0;

    for(int i = 0; i < 13; i++){
        ans += abs(st[i] - st[25 - i]);
    }

    for(int i = 0; i < 5; i++){
        ans += abs(num[i] - num[9 - i]);
    }
    return ans;
}

int main() {
    string s = "kk";

    cout << "output: " << mirrorFreq(s);
    return 0;
}