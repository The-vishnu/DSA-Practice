#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<int> findBianry(int& n){
    vector<int> ans;

    while(n >= 1){

        ans.push_back(n % 2);
        n = n / 2;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int  BinaryGap(int& n){
    vector<int> res = findBianry(n);
    int ans = 0;
    int j = 0;
    for(int i = 1; i < res.size(); i++){
        if(res[j] == 1){
            if(res[i] == 1){
                ans = max(ans, (i - j));
                j = i;
            }
        }
        else {
            j++;
        }
    }

    return ans;
}

int main() {
    int n = 22;

    cout <<"Output: " << BinaryGap(n);
    return 0;
}