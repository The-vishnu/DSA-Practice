#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findeSqrt(int x){
    int st = 0, en = x;
    int ans = 0, mid = 0;

    while(st <= en){
        mid = st + (en - st)/2;

        if(mid*mid == x){
            return mid;
        }
        else if(mid*mid > x){
            en = mid -1;
        } else {
            ans = mid;
            st = mid +1;
        }
    }

    return ans;
}
int main() {
    int sq;
    cout <<"Enter the the squre of any number: " ;
    cin >> sq;

    int ans = findeSqrt(sq);

    cout <<"Squre root of " << sq <<" is " << ans;
    return 0;
}