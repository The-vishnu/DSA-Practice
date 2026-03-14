#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int strStr(string s1, string s2){
    int i = 0, j = s2.size();

    for(i = 0; i <= s1.length() - s2.length(); i++){
        if(s1.substr(i, j) == s2) return i;
    }

    return -1;

    
}

int main() {
    string s1 = "aaa";
    string s2 = "aaaa";

    cout <<"output: " << strStr(s1, s2);
    return 0;
}