#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int position(string pos, int& i, int& j){
    switch(pos[0]){
        case 'R': j++; break;
        case 'D': i++; break;
        case 'L': j--; break;
        case 'U': i--; break;
    }
    return 0;
}

int finalPositionOfSnake(int n, vector<string> commands){
    int row = 0, col = 0;

    for(int pos = 0; pos < commands.size(); pos++){
        position(commands[pos], row, col);
    }

    return row*n + col;
}

int main() {
    // vector<vector<int>> grid = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16}
    // };
    
    vector<string> command = {"RIGHT", "DOWN", "RIGHT", "UP"};
    
    cout <<"Output: " << finalPositionOfSnake(3, command);
    return 0;
}