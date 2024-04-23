#include <iostream>
using namespace std;

void print_maze_paths_with_jump(vector<vector<string>> &maze, int sr, int sc, int dr, int dc, string ans)
{
    if (sr == dr && sc == dc)
    {
        cout << ans << endl;
        return;
    }

    if (sc < dc)
    {
        // horizontal jump

        for (int i = 1; i < (dc - sc); i++)
        {
            print_maze_paths_with_jump(maze, sr, sc + i, dr, dc, ans + "h" + to_string(i));
        }
    }

    if (sr < dr)
    {
        // vertical jump
        for (int i = 1; i < (dr - sr); i++)
        {
            print_maze_paths_with_jump(maze, sr + i, sc, dr, dc, ans + "v" + to_string(i));
        }
    }

    if (sr < dr && sc < dc)
    {
        // diagonal jump
        for (int i = 1; i < (dr - sr) && i < (dc - sc); i++)
        {
            print_maze_paths_with_jump(maze, sr + i, sc + i, dr, dc, ans + "d" + to_string(i));
        }
    }
}

int main()
{
}