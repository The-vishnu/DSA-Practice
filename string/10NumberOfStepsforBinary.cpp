#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numSteps(string s) {
    int carry = 0;
    int count = 0;

    for(int i = s.size()-1; i >= 1; i--){
        if((s[i] - '0' + carry) % 2 == 1) {
            count = count + 2;
            carry = 1;
        }
        else count++;
    }
    return count + carry;
}

int main() {
    string s = "1101";
    int bit = s[0] - '0';
    // cout << "Input: " << bit << endl;
    cout << "Output: " << numSteps(s);
    return 0;
}