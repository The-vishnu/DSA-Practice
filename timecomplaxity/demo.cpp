#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int num, ans = 0, mul = 1, rem;
    
    cout <<"Enter the number: ";
    cin >>num;

    while(num > 0){
        //remendar
        rem = num % 10;
        
        //updating num
        num = num / 10;

        //caculating answar 
        ans = rem*mul +ans;

        //updating mul
        mul = mul *8;
    }

    cout <<"The octal value is " << ans;
    return 0;
}