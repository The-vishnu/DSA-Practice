#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numberOfSubstrings(string s){
    vector<int> freq = {0, 0, 0};
    int i = 0, j = 0;

    int res = 0;
    while(j < s.size()){
        char ch = s[j];
        freq[ch - 'a']++;

        while(freq[0] > 0 && freq[1] > 0 && freq[2] > 0){
            res = res + (s.size() - j);
            char ch = s[i];
            freq[ch - 'a']--;
            i++;
        }
        j++;
    }

    return res;
}


int main() {
    string s = "abcabc";

    cout <<"Output: " << numberOfSubstrings(s);

    return 0;
}