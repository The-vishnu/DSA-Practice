#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2){
    string result = "";

    int carr = 0;

    int s1 = num1.size()-1;
    int s2 = num2.size()-1;

    while(s1 >= 0 || s2 >= 0 || carr){
        int sum = carr;

        if(s1 >= 0) sum += num1[s1--] - '0';
        if(s2 >= 0) sum += num2[s2--] - '0';

        result.push_back((sum %10) + '0');
        carr = sum/10;
    }

    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    string num1 = "11", num2 = "123";

    cout << addStrings(num1, num2);
    return 0;
}