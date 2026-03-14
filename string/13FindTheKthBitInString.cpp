#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string invert(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            s[i] = '0';
        }
        else {
            s[i] = '1';
        }
    }

    return s;
}

char findKthBit(int n, int k){
    string s = "0";

    for(int i = 2; i <= n; i++){
        string temp = invert (s);
        reverse(temp.begin(), temp.end());
        s = s + '1'+ temp;
    }
    return s[k-1];
}

int main() {
    int n = 4, k = 11;

    cout <<"Output: " << findKthBit(n, k);
    return 0;
}