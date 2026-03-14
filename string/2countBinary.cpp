#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countBinarySubstrings(string& s){
    int prev = 0, curr = 1, count = 0;
    for(int i = 1; s[i]!='\0'; i++){

        if(s[i] == s[i-1]){
            curr++;
        }
        else{
            count += min(prev, curr);
            prev =  curr;
            curr = 1;
        }
    }

    return count + min(prev, curr);
}

int main() {
    string s = "00110011";

    cout <<"Output: " << countBinarySubstrings(s);
    return 0;
}