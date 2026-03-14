#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout <<"Enter the number: ";
    cin >>n;

    for(int i = 1; i <= n; i++){
        //space printing 
        for(int j = 1; j <= 2*n - 2*i; j++){
            cout <<" ";
        }
        //star printing 
        for(int j = 1; j <= i; j++){
            cout <<" * ";
        }
        cout <<endl;
    }

    return 0;
}