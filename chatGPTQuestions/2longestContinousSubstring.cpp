#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> mp;
    int i = 0, j = 0;
    int ans = 0;
    while(i < s.size()){
        if(!mp.count(s[i])){
            mp[s[i]]++;
            ans = max(ans, (i - j+1));
            i++;
        }
        else if(s[j] == s[i] || s[j] != s[i]){
            mp.erase(s[j]);
            j++;
        }
    }

    return ans;
}

int main() {
    string s = "pwwkew";

    cout <<"Output: " << lengthOfLongestSubstring(s);
    return 0;
}