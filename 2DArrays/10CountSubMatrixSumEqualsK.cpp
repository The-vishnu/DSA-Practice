#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countSubMatrices(vector<vector<int>>& grid, int k){
    int m = grid.size();
    int n = grid[0].size();
    int count = 0;
    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){
            if(i-1 >= 0) grid[i][j] += grid[i-1][j]; cout << i <<" "<< j << grid[i][j] << endl;

            if(j-1 >= 0) grid[i][j] += grid[i][j-1]; cout << i <<" "<< j << grid[i][j] << endl;

            if(i-1 >= 0 && j-1 >= 0) grid[i][j] -= grid[i-1][j-1]; cout << i <<" "<< j << grid[i][j] << endl;

            if(grid[i][j] <= k){
                count++;
                cout << i <<" "<< j << grid[i][j] << endl;
            }
            else break;
        }
    }

    return count;
}

int main() {
    vector<vector<int>> grid = {{7,6,3}, {6,6,1}};
    int k = 18;
    cout << endl;
    cout <<"output: " << countSubMatrices(grid, k);
    return 0;
}