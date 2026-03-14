#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int count = 0;

    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] == ' ' && count == 0) continue;
        else if(s[i] == ' ' && count > 0) return count;
        else count++;
    }

}

int main() {
    string s = "hello world";

    cout <<"Output: " << lengthOfLastWord(s);
    return 0;
}