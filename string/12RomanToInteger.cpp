#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int romanToInteger(string s){
    unordered_map<char, int> mp = {
        {'I' , 1},
        {'V' , 5},
        {'X' , 10},
        {'L' , 50},
        {'C' , 100},
        {'D' , 500},
        {'M' , 1000}
    };

    int sum = mp[s[0]];
    for(int i = 1; i <= s.size()-1; i++){
        if(mp[s[i]] <= mp[s[i-1]]){
            sum += mp[s[i]];
        }
        else{
            sum += mp[s[i]] - (mp[s[i-1]]*2);
        }
    }
    return sum;

}

int main() {
    string s = "MCMXCIVMCMXCIV";

    cout <<"Output: " << romanToInteger(s);
    return 0;
}