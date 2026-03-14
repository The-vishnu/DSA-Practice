#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPresent(vector<vector<int>>& matrix, int target){
    
    int col = matrix[0].size();
    int row = matrix.size();

    int start_row = 0, end_row = row - 1;
    while(start_row <= end_row){
        int row_mid = start_row + (end_row - start_row)/2;

        if(matrix[row_mid][0] <= target && matrix[row_mid][col-1] >= target){
            int left = 0, right = col-1;
            while(left <= right){
                int mid = left + (right - left)/2;
                if(matrix[row_mid][mid] == target) return true;
                else if(target > matrix[row_mid][mid]) left = mid+1;
                else right = mid-1;
            }
            return false;
        }
        else if(target < matrix[row_mid][0]) end_row = row_mid-1;
        else start_row = row_mid+1;
        
    }
    return false;

}

int main() {
    vector<vector<int>> matrix = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };

    cout << "Matrix: " << endl;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    if(isPresent(matrix, 55)){
        cout <<"True";
    }
    else cout <<"False";
    return 0;
}