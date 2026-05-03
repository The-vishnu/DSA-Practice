#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


string minimumWindow(string s, string t){
    unordered_map<char, int> mp;
    int charCnt = 0;
    for(char it : t){
        mp[it]++;
        charCnt++;
    }


    int i = 0;
    int j = 0;
    int st = 0;

    int minWin = INT_MAX;
    while(j < s.size()){
        if(mp[s[j]] > 0) charCnt--;
        mp[s[j]]--;

        while(charCnt == 0){
            int currWin = j - i + 1;
            if(minWin > currWin){
                minWin = currWin;
                st = i;
            }
            mp[s[i]]++;
            if(mp[s[i]] > 0) charCnt++;
            i++;
        }
        
        j++;

    }

    return (minWin == INT_MAX)  ? "" : s.substr(st, minWin);
}

int main() {
    string s = "ADOBECODEBANC";
    string t = "ABC";

    cout <<"Output: " << minimumWindow(s, t);
    return 0;
}