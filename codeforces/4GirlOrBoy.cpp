#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool girlOrBoy(string &s){
    set<char> st;

    for(char it : s){
        st.insert(it);
    }

    if(st.size() %2 == 0) return true;

    return false;
}

int main() {

    string name;
    getline(cin, name);

    if(girlOrBoy(name)){
        cout <<"CHAT WITH HER!" << "\n";
    }
    else {
        cout <<"IGNORE HIM!" << "\n";
    }
    
    return 0;
}