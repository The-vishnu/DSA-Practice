#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isVowels(char& s){
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U') return true; 
    else return false;
}

string reverseVowels(string& s){
    int i = 0, j = s.size()-1;
    cout << s[j] << endl;
    while(i < j){
        if(isVowels(s[i])){
            if(isVowels(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else j--;
        }
        else i++;
    }

    return s;
}

int main() {
    string s = "IceCreAm";

    cout <<"Output: " << reverseVowels(s);

    return 0;
}