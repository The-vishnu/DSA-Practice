#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m) {
  if (n%m == 0) return m;
  if (n < m) swap(n, m);
  while (m > 0) {
    n = n%m;
    swap(n, m);
  }
  return n;
}


int main() {
    int a = 5, b = 3;

    cout <<"the output: " << gcd(a, b);
    return 0;
}