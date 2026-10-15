#include <bits/stdc++.h>
using namespace std;

int N, M, T, I;
vector<vector<char>> grid;
vector<vector<bool>> allowed;
vector<vector<bool>> visited;

string firstKey = "";
bool multiple = false;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y, int time, string &path) {

    if (multiple) return;

   
    if (time == T) {
        if (firstKey.empty()) {
            firstKey = path;
        }
        else if (firstKey != path) {
            multiple = true;
        }
        return;
    }

    visited[x][y] = true;

    for (int d = 0; d < 4; d++) {

        int nx = x + dx[d];
        int ny = y + dy[d];

        if (nx < 0 || nx >= N || ny < 0 || ny >= M)
            continue;

        if (visited[nx][ny])
            continue;

        
        if (!allowed[time + 1][nx * M + ny])
            continue;

        path.push_back(grid[nx][ny]);

        dfs(nx, ny, time + 1, path);

        path.pop_back();
    }

    visited[x][y] = false;
}

int main() {

    cin >> N >> M;

    grid.resize(N, vector<char>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> T;
    cin >> I;

    
    allowed.assign(T + 1,
                   vector<bool>(N * M, true));

    for (int i = 0; i < I; i++) {

        int t;
        cin >> t;

        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

       
        x1--;
        y1--;
        x2--;
        y2--;

        
        for (int x = x1; x <= x2; x++) {
            for (int y = y1; y <= y2; y++) {
                allowed[t][x * M + y] = false;
            }
        }
    }

    
    for (int t = 1; t <= T; t++) {

        bool exists = false;

        for (int cell = 0; cell < N * M; cell++) {
            if (allowed[t][cell]) {
                exists = true;
                break;
            }
        }

        if (!exists) {
            cout << "Not enough clues\n";
            return 0;
        }
    }

    visited.assign(N, vector<bool>(M, false));

    string path;

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {

            if (!allowed[1][i * M + j])
                continue;

            path.clear();
            path.push_back(grid[i][j]);

            dfs(i, j, 1, path);

            if (multiple) {
                cout << "Not enough clues\n";
                return 0;
            }
        }
    }

    if (firstKey.empty()) {
        cout << "Not enough clues\n";
    }
    else {
        cout << firstKey << '\n';
    }

    return 0;
}