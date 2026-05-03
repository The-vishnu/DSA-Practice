#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


bool allZeros(vector<int>& ch){
    for(int it : ch){
        if(it != 0) return false;
    }

    return true;
}

vector<int> totalAnagrams(string &s, string &p){
    unordered_map<char, int> mp;
    vector<int> res;
    int charCnt = 0;

    for(char it : p){
        mp[it]++;
        charCnt++;
    }



    int j = 0;
    int k = p.size();

    for(int i = 0; i < s.size(); i++){
        if(mp[s[i]] > 0)charCnt--;
        mp[s[i]]--;

        if(i - j+1 == k){
            if(charCnt == 0) res.push_back(j);

            if(mp[s[j]] >= 0) charCnt++;
            mp[s[j]]++;
            j++;

        }
    }


    return res;

}


int main() {
    string s = "cbaebabacd";
    string p = "abc";

    vector<int> ans = totalAnagrams(s, p);

    for(auto it : ans){
        cout << it << " ";
    }
    return 0;
}