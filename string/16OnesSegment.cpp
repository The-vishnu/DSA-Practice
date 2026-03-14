#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool OneSegment(string s){
    int i = 0, j = 1;

    while(j < s.size()){
        if(s[j] == '1'){
            if(s[j] != s[i]) return false;
        }
        i++;
        j++;
    }

    return true;

    
}

int main() {
    string s = "1100";

    if(OneSegment(s)){
        cout <<"True";
    }
    else {
        cout <<"False";
    }
    return 0;
}