#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        //loop for spaces
        for(int j = 1; j <= n-i; j++){
            cout << "  ";
        }
        //loop for increasing order
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        } 
        // loop for decreasing order
        for(int j = i -1; j >= 1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}