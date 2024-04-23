// can take 1 2 3 4 ... col length horizontal jumps
// can take 1 2 3 4 ... row length  vertical jumps
// can take 1 2 3 4 ... diagonal jumps

#include<iostream>
using namespace std;

// horizontal jump CAN BE H1 H2 .. HN




vector<string> getMazePathsWithJumps(vector<vector<int>>& maze, int sr, int sc, int dr, int dc) {
    // base case
    if (sr == dr && sc == dc) {
        vector<string> base;
        base.push_back("");
        return base;
    }

    vector<string> paths;

    // Horizontal jumps
    if (sc < dc) {
        for (int ms = 1; ms <= (dc - sc); ms++) {
            vector<string> hpaths = getMazePathsWithJumps(maze, sr, sc + ms, dr, dc);
            for (auto it : hpaths) {
                paths.push_back("H" + to_string(ms) + it);
            }
        }
    }

    // Vertical jumps
    if (sr < dr) {
        for (int ms = 1; ms <= (dr - sr); ms++) {
            vector<string> vpaths = getMazePathsWithJumps(maze, sr + ms, sc, dr, dc);
            for (auto it : vpaths) {
                paths.push_back("V" + to_string(ms) + it);
            }
        }
    }

    // Diagonal jumps
    if (sr < dr && sc < dc) {
        for (int ms = 1; (ms <= (dc - sc)) && (ms <= (dr - sr)); ms++) {
            vector<string> dpaths = getMazePathsWithJumps(maze, sr + ms, sc + ms, dr, dc);
            for (auto it : dpaths) {
                paths.push_back("D" + to_string(ms) + it);
            }
        }
    }

    return paths;
}

int main() {
    // Example usage
    vector<vector<int>> maze = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    int sr = 0, sc = 0, dr = 2, dc = 2;
    vector<string> paths = getMazePathsWithJumps(maze, sr, sc, dr, dc);
    for (auto path : paths) {
        cout << path << endl;
    }
    return 0;
}
