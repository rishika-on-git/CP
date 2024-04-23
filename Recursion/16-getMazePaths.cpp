#include <iostream>
using namespace std;

// 62. Unique Paths

// There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

// Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.

// The test cases are generated so that the answer will be less than or equal to 2 * 109.

// Input: m = 3, n = 2
// Output: 3
// Explanation: From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
// 1. Right -> Down -> Down
// 2. Down -> Down -> Right
// 3. Down -> Right -> Down

// either horizontal or vertical
vector<string> getMazePaths(vector<vector<int>> &maze, int sr, int sc, int dr, int dc)
{
    if (sr == dr && sc == dc)
    {
        // Reached the destination
        vector<string> bres;
        bres.push_back("");
        return bres;
    }

    vector<string> paths;

    // Go horizontal if within maze boundaries
    if (sc < dc)
    {
        vector<string> hPaths = getMazePaths(maze, sr, sc + 1, dr, dc);
    }

    // Go vertical if within maze boundaries
    if (sr < dr)
    {
        vector<string> vPaths = getMazePaths(maze, sr + 1, sc, dr, dc);
    }

    for (auto it : hPaths)
    {
        paths.push_back("h" + it);
    }
    for (auto it : vPaths)
    {
        paths.push_back("v" + it);
    }

    return paths;
}
