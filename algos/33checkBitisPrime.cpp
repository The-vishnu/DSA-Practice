#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int primeNumber(int num){

    if(num == 1) return 0;

    for(int i = 2; i*i <= num; i++){
        if(num % i == 0) return 0;
    }

    return 1;







    // int count = 0;
    // for(int i = 1; i <= num; i++){
    //     if(num % i == 0){
    //         count++;
    //     }
    // }

    // if(count == 2){
    //     return 1;
    // }
    // else return 0;
}

int countPrimeSetBits(int left, int right){
    int ans = 0;
    for(int i = left; i <= right; i++){
        if(primeNumber(__builtin_popcount(i))) ans++;
    }
    return ans;
}

int main() {
    int left = 6, right = 10;

    cout <<"Output: " << countPrimeSetBits(left, right);

    return 0;
}