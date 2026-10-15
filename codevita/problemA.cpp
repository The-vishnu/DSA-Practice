#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<tuple<int, int, string> > commands;

    for (int i = 0; i < N; i++) {
        int existing, newCube;
        string direction;

        cin >> existing >> newCube >> direction;

        commands.push_back(make_tuple(existing, newCube, direction));
    }

    sort(commands.begin(), commands.end());

    map<int, pair<int, int> > pos;
    map<pair<int, int>, int> occupied;

    pos[1] = make_pair(0, 0);
    occupied[make_pair(0, 0)] = 1;

    for (int i = 0; i < commands.size(); i++) {

        int existing = get<0>(commands[i]);
        int newCube = get<1>(commands[i]);
        string direction = get<2>(commands[i]);

        int x = pos[existing].first;
        int y = pos[existing].second;

        int nx = x;
        int ny = y;

        if (direction == "right")
            ny++;

        else if (direction == "left")
            ny--;

        else if (direction == "top")
            nx--;

        else if (direction == "down")
            nx++;

        pair<int, int> newPosition = make_pair(nx, ny);

        if (occupied.count(newPosition)) {
            int oldCube = occupied[newPosition];
            pos.erase(oldCube);
        }

        pos[newCube] = newPosition;
        occupied[newPosition] = newCube;
    }

    int query;
    cin >> query;

    int x = pos[query].first;
    int y = pos[query].second;

    pair<int, int> up = make_pair(x - 1, y);
    pair<int, int> down = make_pair(x + 1, y);
    pair<int, int> left = make_pair(x, y - 1);
    pair<int, int> right = make_pair(x, y + 1);

    int upCube = -1;
    int downCube = -1;
    int leftCube = -1;
    int rightCube = -1;

    if (occupied.count(up))
        upCube = occupied[up];

    if (occupied.count(down))
        downCube = occupied[down];

    if (occupied.count(left))
        leftCube = occupied[left];

    if (occupied.count(right))
        rightCube = occupied[right];

    cout << upCube << " "
         << downCube << " "
         << leftCube << " "
         << rightCube << endl;

    return 0;
}