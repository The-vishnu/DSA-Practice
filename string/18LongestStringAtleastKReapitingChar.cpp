#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string s, int k){
    unordered_map<char, int> mp;
    
    int j = 0;
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }

    //create a map to store the frequency of characters in the current window
    //create another array that check the charecters that has frequency grater or equal to k 
    // and then check the size of the array and update the ans if the size of the array is equal to the size of the map then update the ans with the size of the current window

    int i = 0;
    while(j < s.size()){
        if(mp[s[j]] >= k){

        }
    }

    
    return ans;
}

int main() {
    string s = "ababacb";
    int k = 2;

    cout << endl;
    cout <<"Output: " << longestSubstring(s, k);
    return 0;
}