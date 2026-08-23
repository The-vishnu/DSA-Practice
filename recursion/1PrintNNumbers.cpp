#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void recursiveFunction(int n){
    if(n == 0) return;
    cout << n << " ";
    recursiveFunction(n -1);
}

int main() {
    int n;
    cout << "enter the value of n: ";
    cin >> n;

    recursiveFunction(n);

    return 0;
}