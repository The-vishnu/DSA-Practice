#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int st , int en, int target){
    vector<int> result;

    while(st < en){
        // cout <<"adding...";
        if(arr[st] + arr[en] == target){
            result.push_back(st);
            result.push_back(en);

            return result;
        }
        else if(arr[st] + arr[en] > target){
            en--;
        }
        else {
            st++;
        }
    }
    return result;
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int st = 0, en = arr.size() -1;
    int target = 9;

    vector<int> result = twoSum(arr, st, en, target);

    for(int i : result){
        cout << i <<" ";
    }
    return 0;
}
