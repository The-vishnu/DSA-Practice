#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string binaryConversion(int n){
    string ans = "";
    while(n > 0){
        ans.push_back((n%2) + '0');
        n /= 2;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int concatenatedBinary(int n){
    string ans = "";
    for(int i = 1; i <= n; i++){
        string s =  binaryConversion(i);
       ans += s;
    }

    int mod = 1e9 + 7;
    long long num = 0;
    for(int i = 0; i < ans.size(); i++){
        num = (num*2 + (ans[i] - '0')) % mod;
    }
    return num;
}

int main() {
    int n = 12;

    cout <<"output: " << concatenatedBinary(n);
    return 0;
}