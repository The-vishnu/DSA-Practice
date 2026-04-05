#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string sortSentence(string& s){
    vector<string> str(9, " ");

    string st = "";
    for(int i = 0; i < s.size(); i++){

        if(s[i] != ' '){
            
            if(!isdigit(s[i])){
                st += s[i];
            }
            else{
                str[s[i] - '0'] = st;
                st = "";
            }
        }
    }

    string ans = "";
    for(auto it : str){
        if(it != " ") ans += it +" ";

    }

    return ans.substr(0, ans.size()-1);
}

int main() {
    string s = "Myself2 Me1 I4 and3";

    cout << sortSentence(s);
    return 0;
}