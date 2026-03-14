#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix){

    for(int i = 0; i < matrix.size()-1; i++){
        for(int j = i+1; j < matrix.size(); j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i = 0; i < matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

    return matrix;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Before Rotation: " << endl;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix.size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "After Rotation: " << endl;
    vector<vector<int>> res = transpose(matrix);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res.size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}