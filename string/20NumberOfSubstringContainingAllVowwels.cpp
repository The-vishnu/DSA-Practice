#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int numberOfSubstrings(string s, int k){
    unordered_map<char, int> vowCount;
    vector<int> nextCons(s.size());
    long long res = 0;

    int lastConstIndex = s.size();
    for(int i = s.size() - 1; i >= 0; i--){
        nextCons[i] = lastConstIndex;
        if(!isVowel(s[i])){
            lastConstIndex = i;
        }
    }

    int i = 0, j = 0;
    int cons = 0;
    while(j < s.size()){
        char ch = s[j];
        if(isVowel(ch)){
            vowCount[ch]++;
        }
        else{
            cons++;
        }

        while(cons > k){
            char lastCh = s[i];
            if(isVowel(lastCh)){
                vowCount[lastCh]--;
                if(vowCount[lastCh] == 0) vowCount.erase(lastCh);
            }
            else cons--;
            i++;
        }

        while(i < s.size() && vowCount.size() == 5 && cons == k){
            res = res + (nextCons[j] - j);
            char lastCh = s[i];
            if(isVowel(lastCh)){
                vowCount[lastCh]--;
                if(vowCount[lastCh] == 0) vowCount.erase(lastCh);
            }
            else cons--;

            i++;

        }
        j++;
    }

    
    return res;
}

int main() {
    string s = "ieaouqqieaouqq";
    int k = 1;
    cout << endl;
    cout <<"Output: "<< numberOfSubstrings(s, k) ;

    return 0;
}