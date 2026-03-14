#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int LongestSubstrigWithKElement(string s, int k){
    unordered_map<char, int> mp;

    int i = 0, j = 0;
    int ans = 0;
    while(j < s.size()){
        if(mp.count(s[i]) || !mp.count(s[i])){
            mp[s[j]]++;

            if(mp.size() <= k){
                ans = max(ans, (j -i+1));
                j++;
            }
            else{
                while(mp.size() > k){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0) mp.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
    }

    if(mp.size() < k) return -1;
    return ans;
}

int main() {
    string s = "aabacbebebe";
    int k = 3;
    cout << endl;
    cout <<"Output: " << LongestSubstrigWithKElement(s, k);


    return 0;
}