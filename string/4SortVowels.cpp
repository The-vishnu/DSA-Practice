#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<char> FilterVowels(string s){
    vector<char> f;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            f.push_back(s[i]);
        }
        else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            f.push_back(s[i]);
        }
    }

    sort(f.begin(), f.end());
    return f;
}

string SortVowels(string& s){
    vector<char> f = FilterVowels(s);
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            s[i] = f[j++];
        }
        else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            s[i] = f[j++];
        }

        
    }
    return s;

}

int main() {
    string s = "lEetcOde";

    cout << SortVowels(s);
    return 0;
}