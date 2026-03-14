#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& arr){
    int ans = 0, count = 0;
    int n = arr.size();

    for(int i = 0; i < n; i++){

        if(arr[i] == 1){
            count++;
        }
        else{
            ans = max(ans, count);
            count = 0;
        }
    }
    ans = max(ans, count);
    return ans;
}

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0};
    int result = findMaxConsecutiveOnes(arr);
    cout <<"the max consecutive ones are: " << result << endl;

    return 0;
}