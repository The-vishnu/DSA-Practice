#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largestSubmatrix(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();

    int maxArea = 0;

    // First Approch

    //for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         if(matrix[i][j] == 1 && i > 0){
    //             matrix[i][j] += matrix[i-1][j];

    //         }
    //     }

    //     vector<int> heights = matrix[i];
    //     sort(begin(heights), end(heights), greater<int>());

    //     for(int k = 0; k < n; k++){
    //         int base = (k+1);
    //         int height = heights[k];

    //         maxArea = max(maxArea, (base*height));
    //     }
    // }





    // Second Approch
    vector<int> previRow(m, 0);

    for(int row = 0; row < m; row++){
        vector<int> currRow = matrix[row];
        for(int col = 0; col < n; col++){
            if(currRow[col] == 1 && row > 0){
                currRow[col] += previRow[col];
            }
        }

        vector<int> heights = currRow;
        sort(begin(heights), end(heights), greater<int>());

        for(int k = 0; k < n; k++){
            int base = (k+1);
            int height = heights[k];

            maxArea = max(maxArea, (base*height));
        }

        previRow = currRow;
    }

    return maxArea;
}

int main() {
    vector<vector<int>> matrix = {{0,0,1},
                                  {1,1,1},
                                  {1,0,1}};


    cout <<endl;
    cout <<"output: "<< largestSubmatrix(matrix) << endl;

    return 0;
}