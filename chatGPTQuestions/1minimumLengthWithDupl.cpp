#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minimumLengthInDuplicate(vector<int> &arr){
    unordered_map<int, int> mp;
    int st = 0, en = 0;
    int n = arr.size() -1;;
    int minLenght = INT_MAX;
    int count = 1;

    while(st != n-1 && en != n){
        if(!mp.count(arr[en])){
            mp[arr[en]];
            en++;
            count++;
        } else{
            minLenght = min(minLenght, count);
            if(en != n){
                mp.erase(arr[st]);
                st++;
                en++;
            } else {
                mp.erase(mp[arr[st]]);
                st++;
                count --;
            }
            
        }
    }

    return minLenght;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 3};

    cout << minimumLengthInDuplicate(arr);

    return 0;
}