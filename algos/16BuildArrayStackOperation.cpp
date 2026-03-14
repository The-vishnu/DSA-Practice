#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<string> buildArray(vector<int> &target, int n){
    vector<string> result;
    int j = 0;
    for(int i = 1; i <= n && j <= target.size(); i++){
        result.push_back("push");
        if(target[j] != i){
            result.push_back("pop");
        }
        else{
            j++;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 3};

    vector<string> ans = buildArray(arr, 3);

    cout <<"[";
    for(auto s : ans){
        cout << s << " ";
    }
    cout <<"]" << endl;
    return 0;
}