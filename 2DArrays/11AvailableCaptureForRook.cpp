#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numRookCaptures(vector<vector<char>>& board){
    int count = 0;
    int m = board.size();
    int n = board[0].size();

    for(int row = 0; row < m; row++){

        for(int col = 0; col < n; col++){
            if(board[row][col] == 'R'){
                // going Up side to find Pawn
                for(int up = row-1; up >= 0; up--){
                    if(board[up][col] == 'B') break;
                    else if(board[up][col] == 'P'){count++; break; }
                }

                //going down side to find Pawn
                for(int down = row+1; down < m; down++){
                    if(board[down][col] == 'B') break;
                    else if(board[down][col] == 'P'){count++; break; } 
                }

                //going right side to find Pawn
                for(int right = col+1; right < n; right++){
                    if(board[row][right] == 'B') break;
                    else if(board[row][right] == 'P'){count++; break; }
                }

                //going left side to find Pawn
                for(int left = col-1; left >= 0; left--){
                    if(board[row][left] == 'B') break;
                    else if(board[row][left] == 'P'){count++; break; }
                }

                return count;

            }
        }

        
    }

    return 0;
}

int main() {
    vector<vector<char>> board = {
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', 'P', '.', '.', '.', '.'},
        {'.', '.', '.', 'R', '.', '.', '.', 'P'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', 'P', '.', '.', '.', '.'},
        {'.', '.', '.', 'P', '.', '.', '.', '.'},
        {'.', '.', '.', 'P', '.', '.', '.', '.'}
    };

    cout <<"Output: " << numRookCaptures(board);

    return 0;
}