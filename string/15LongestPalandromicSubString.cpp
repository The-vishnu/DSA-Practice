#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int LongestSubstring(string s){
    string temp = s;
    reverse(temp.begin(), temp.end());
    int n = s.size();
    if(s == temp) return n;

    int i = 0, j = 1;
    int ans = 0;
    while(j < n){
        temp = s.substr(i , (j - 1 +1));
        reverse(temp.begin(), temp.end());
        if(s.substr(i, (j - 1 +1)) == temp) ans = max(ans, (j - i+1));
        j++;
    }

    return ans;
}

int main() {
    string s = "ababd";

    cout <<"output: " << LongestSubstring(s);
    return 0;
}