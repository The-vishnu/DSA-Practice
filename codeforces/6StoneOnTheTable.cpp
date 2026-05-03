#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int afterRemovingTheStones(string &s, int n){

    int dupCount = 0;

    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]) dupCount += 1;
    }

    return dupCount;

}

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;
     
    cout << afterRemovingTheStones(s, n) <<'\n';

    return 0;
}