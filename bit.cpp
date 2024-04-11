#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int val = 0;

    while (t--)
    {
        string s;
        cin >> s;

        if (s == "X++" || s == "++X")
        {
            val++;
        }
        else if (s == "X--" || s == "--X")
        {
            val--;
        }
    }

    cout << val << endl;
    return 0;
}
