#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(string s){
    string temp = s;
    reverse(temp.begin(), temp.end());
    if(temp == s) return true;
    return false;

}

string longestPalindrome(string s){
    int j = 0, k = 0;
    int PassLen = 0;
    string ans;
    while(j < s.size()){
        k = j;
        while(k < s.size()){
            string sub = s.substr(j, (k-j+1));
            int CurrLen = sub.size();
            if(isPalindrom(sub)){
                if(CurrLen > PassLen){
                    ans = sub;
                    PassLen = CurrLen;
                }
            }
            k++;
        }
        j++;
    }

    return ans;
}

int main() {
    string s = "abcdbbfcba";

    cout <<"output: " << longestPalindrome(s);
    return 0;
}