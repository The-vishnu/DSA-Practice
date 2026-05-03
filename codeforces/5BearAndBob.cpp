#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int year(int &a, int &b){

    int yearCnt = 0;
    while(a <= b){
        yearCnt++;
        a = a*3;
        b = b*2;
    }

    return yearCnt;
}

int main() {
    int a;
    int b;

    cin >> a >> b;

    cout << year(a, b) << endl;
    return 0;
}