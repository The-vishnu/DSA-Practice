#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findRepeatingElement(vector<int> &arr){
    map<int, int> mp;
    for(auto ele : arr){
        mp[ele]++;
        if(mp[ele] > 1){
            return ele;
        }
    }

    return 0;
}
int main() {
    vector<int> arr = {1, 2, 3, 3};

    int res = findRepeatingElement(arr);
    cout << "The repeating element is: " << res << endl;
    return 0;
}