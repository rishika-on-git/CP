#include <iostream>
#include <climits> // Include this header for INT_MAX
using namespace std;

int main()
{
    // phle 5 steps liye then ya to 1 , 2 , 3 , 4

    int n;
    cin >> n;

    if (n % 5 == 0)
    {
        cout << (n / 5);
    }
    else
    {
        int res = n / 5;

        cout << res + 1;
    }

    cout << endl;
    return 0;
}