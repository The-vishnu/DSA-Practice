#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkRecord(string s){
    int AbsCou = 0;
    int LateCou = 0;
    for(char ch : s){
        if(ch == 'A'){
            AbsCou++;
            LateCou = 0;
            if(AbsCou >= 2) return false;
        }
        else if(ch == 'L'){
            LateCou++;
            if(LateCou >= 3) return false;
        }
        else {
            LateCou = 0;
        }
    }

    return true;
}

int main() {
    string s = "LALL";

    if(checkRecord(s)){
        cout <<"Output: " <<"True";
    }
    else {
        cout <<"Output: " <<"False";
    }
    return 0;
}