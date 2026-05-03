#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int uniqueElementCount(string &ch){
    set<char> st;

    for(char it : ch){
        if(islower(it)){
            st.insert(it);
        }
    }

    return st.size();

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    fastio();
    
    string ch;
    getline(cin, ch);

    cout << uniqueElementCount(ch) << '\n';
    return 0;
}