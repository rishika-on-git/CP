#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    for (int i = 1; i <= x; i++)
    {
        int lastDigit = n % 10;

        if (lastDigit == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }

    cout << n;
}
