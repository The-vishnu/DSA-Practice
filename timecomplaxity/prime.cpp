#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;

    if(num == 2 || num == 3) return true;

    if(num % 2 == 0 || num % 3 == 0) return false;

    for(int i = 5; i * i <= num; i++){
        if(num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
    
}

int main() {
    int number ;
    
    cout <<"Enter the number: ";
    cin >> number;


    if(isPrime(number)){
        cout <<"yes its a prime number";
    } else {
        cout <<"No its not a prime number";
    }
    return 0;
}