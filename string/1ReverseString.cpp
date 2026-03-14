#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseStr(string& s, int k){
    int n = s.size();

    for(int i = 0; i < n; i = i + 2*k) reverse(s.begin()+i, s.begin()+ min(i + k, n));
    return s;
}

int main() {
    string s = "abcdefgh";
    int k = 2;

    cout << reverseStr(s, k) << endl;

    return 0;
}