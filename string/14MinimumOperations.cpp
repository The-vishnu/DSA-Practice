#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minOperations(string& s){
    int n = s.size();

    int count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 && s[i] != '0') count1++;
        if(i % 2 != 0 && s[i] != '1') count1++;
    }

    for(int i = 0; i < n; i++){
        if(i % 2 == 0 && s[i] != '1') count2++;
        if(i % 2 != 0 && s[i] != '0') count2++;
    }

    return min(count1, count2);

}

int main() {
    string s = "10101010";

    cout << "Output: " << minOperations(s) << endl;
    cout << "String is: " << s;
    return 0;
}