#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k){
    for(int i = y; i < k+y; i++){
        
        int st = x, en = k-1+x;
        while(st < en){
            swap(grid[st][i], grid[en][i]);
            st++;
            en--;
        }
    }

    return grid;
}

int main() {
    vector<vector<int>> matrix = {
        {3,4,2,3},
        {2,3,4,2}
    };

    int x = 0, y = 2, k = 2;

    vector<vector<int>> ans = reverseSubmatrix(matrix, x, y, k);

    for(int i = 0; i < ans.size(); i++){

        for(int j = 0; j < ans[0].size(); j++){

            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}