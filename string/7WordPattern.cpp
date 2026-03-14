#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<string> filterWords(string& s){
    vector<string> ans;
    string word = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            ans.push_back(word);
            word = "";
        }
        else{
            word += s[i];

        }
    }
    ans.push_back(word);
    return ans;
}

bool wordPattern(string& pattern, string& s){
    vector<string> ans = filterWords(s);
    set<string> used;
    unordered_map<char, string> mp;

    if(ans.size() != pattern.size()) return false;
    for(int i = 0; i < pattern.size(); i++){
        if(!mp.count(pattern[i])){
            if(!used.count(ans[i])){
                mp[pattern[i]] = ans[i];
                used.insert(ans[i]);
            }
            else{
                return false;
            }
        }
        else if(mp.count(pattern[i])){
            if(mp[pattern[i]] != ans[i]){
                return false;
            }
        }
        
    }

    return true;
}

int main() {
    string pattern = "abba";
    string s = "cat cat cat cat";

    if(wordPattern(pattern, s)){
        cout <<"output: " << "true";
    }
    else {
        cout <<"output: " << "false";
    }
    return 0;
}