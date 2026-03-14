#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout <<"Enter the Number: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        //loop for space
        for(int j = 1; j <= n-i; j++){
            cout << "  ";
        }
        //loop for star
        for(int j = 1; j <=(2*i) -1; j++){
            cout << j << " ";
        }
        cout <<endl;
    }
    return 0;
}