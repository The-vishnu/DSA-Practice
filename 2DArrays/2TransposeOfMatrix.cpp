#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    for(int i = 0; i < m-1; i++){
        for(int j = i; j < n; j++){
            swap(matrix[j][i], matrix[i][j]);
        }
    }

    return matrix;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Before Transpose: " << endl;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix.size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "After Transpose: " << endl;
    vector<vector<int>> res = transpose(matrix);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res.size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }   
    return 0;
}