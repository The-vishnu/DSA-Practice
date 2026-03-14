#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int ReverseInteger(int num){
        int ans = 0;
        int sign = 0;
        if (num < 0) sign = -1;
        int n = abs(num);
        while (n != 0) {
            ans = ans * 10 + n % 10;
            if((num > INT_MAX / 10) || (num < INT_MIN /10)) return 0;
            n /= 10;
        }
        if (sign != 0) return ans * sign;
        return ans;
}

int main() {
    int num = -2147483412;
   
    cout << ReverseInteger(num);
    return 0;
}