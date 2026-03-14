#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string ConvertBinary(int n){
    if(n == 0) return "1";
    string s = "";
    
    while(n > 0){
        int rem = n %2;
        s = to_string(rem) + s;
        n /= 2;
    }
    for(int i = s.size(); i >= 0; i--){
        if(s[i] == '0') s[i] = '1';
        else s[i] = '0';
    }
    return s;
}

int bitwiseComplement(int n){
    string s = ConvertBinary(n);
    int pow = 0;
    int ans = 0;
    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] == '1'){
            ans += (1 << pow);
        }
        pow++;
    }
    return ans;
}
int main() {
    int n = 10;

    cout <<"Output: " <<bitwiseComplement(n);
    return 0;
}