#include <iostream>
using namespace std;

void print_stair_paths(int n, string ans)
{
    // can take jump of 1 2 or 3
    if (n < 0)
    {
        return;
    }
    if (n == 0)
    {
        cout << ans << endl;
        return;
    }

    print_stair_paths(n - 1, ans + "1");
    print_stair_paths(n - 2, ans + "2");
    print_stair_paths(n - 3, ans + "3");
}

int main()
{
    int n;
    cin >> n;
    print_stair_paths(n, "");
    return 0;
}