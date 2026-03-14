#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char>& s) {
    int i = 0; 
    int j = s.size()-1;

    while(i <= j){
        cout << s[i] << " " << s[j] << endl;
        swap(s[i], s[j]);
        i++;
        j--;
    }
}
int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);

    for(auto it : s){
        cout << it << " ";
    }
    return 0;
}