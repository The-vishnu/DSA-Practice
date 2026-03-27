#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool canPartitionGrid(vector<vector<int>>& grid){
    int row = grid.size();
    int col = grid[0].size();

    long long totalSum = 0;
    long long prevRow = 0;
    long long prevCol = 0;

    for(int i = 0; i < row; i++){

        for(int j = 0; j < col; j++){
            totalSum += grid[i][j];
        }
    }

    if(totalSum %2 != 0) return false;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            prevRow += grid[i][j];
            if(totalSum - prevRow == prevRow) return true;
        }
    }

    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            prevCol += grid[i][j];
            if(totalSum - prevCol == prevCol) return true;
        }
    }



    
    // for(int i = 0; i < m; i++){

    //     for(int j = 0; j < n; j++){
    //         totalSum += grid[i][j];
    //         prevRow += grid[i][j];
    //         prifRow[i] = prevRow;
    //         prevCol += grid[i][j];
    //         prifCol[j] = prevCol;
    //     }

    // }

    // if(totalSum %2 != 0) return false;

    // for(int i = 0; i < prifRow.size()-1; i++){
    //    if(totalSum - prifRow[i] == prifRow[i]) return true;
    // }

    // for(int i = 0; i < prifCol.size()-1; i++){
    //     if(totalSum - prifCol[i] == prifCol[i]) return true;
    // }

    return false;
}

int main() {
    vector<vector<int>> grid = {
        {1,3,2},
        {1,1,1},
        {2,3,4}
    };

    cout << endl;

    if(canPartitionGrid(grid)){
        cout <<"true";
    }
    else cout <<"false";

    return 0;
}