#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countUngurdedCell(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls){
    int gurded = 0;
    int Guards = guards.size();
    int Walls = walls.size();
    vector<vector<string>> grid(m, vector<string>(n, "Un"));

    for(int i = 0; i < Walls; i++){
        int row = walls[i][0];
        int col = walls[i][1];
        grid[row][col] = "Wa";

    }

    for(int i = 0; i < Guards; i++){
        int row = guards[i][0];
        int col = guards[i][1];
        grid[row][col] = "Ga";

    }

    for(int i = 0; i < Guards; i++){
        int row = guards[i][0];
        int col = guards[i][1];

        // For Up
        int r = row-1;
        while(r >= 0 && grid[r][col] != "Wa" && grid[r][col] != "Ga"){
            if(grid[r][col] == "Un"){
                grid[r][col] = "gu";
                gurded++;
            }
            r--;
        }

        // For Down 
        r = row+1;
        while(r < m && grid[r][col] != "Wa" && grid[r][col] != "Ga"){
            if(grid[r][col] == "Un"){
                grid[r][col] = "gu";
                gurded++;
            }
            r++;
        }


        // For Right
        int c = col+1;
        while(c < n && grid[row][c] != "Wa" && grid[row][c] != "Ga"){
            if(grid[row][c] == "Un"){
                grid[row][c] = "gu";
                gurded++;
            }
            c++;
        }

        // // For Left
        c = col-1;
        while(c >= 0 && grid[row][c] != "Wa" && grid[row][c] != "Ga"){
            if( grid[row][c] == "Un"){
                grid[row][c] = "gu";
                gurded++;
            }
            c--;
        }
        
    }

    return m*n - (Guards+Walls) - gurded; 
}

int main() {
    vector<vector<int>> guards = {{0, 0}, {1, 1}, {2, 3}};
    vector<vector<int>> walls = {{0, 1}, {2, 2}, {1, 4}};

    int m = 4, n = 6;


    cout <<"Output: " << countUngurdedCell(m, n, guards, walls);
    return 0;
}