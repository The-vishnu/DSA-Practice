#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPresent(vector<vector<int>> matrix, int target){
    int row = matrix.size(), col = matrix[0].size();
    int i = 0, j = col -1;

    while(j >= 0 && i < row){
        if(target == matrix[i][j]) return true;
        else if(target < matrix[i][j]) j--;
        else i++;
    }

    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    cout <<endl;
    if(isPresent(matrix, 57)){
        cout <<"True";
    }
    else {
        cout <<"False";
    }


    return 0;
}