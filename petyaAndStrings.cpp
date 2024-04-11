#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int n1 = s1.length();
    int n2 = s2.length();

    for (int i = 0; i < n1; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] = s1[i] + 32;
        }
    }

    for (int i = 0; i < n2; i++)
    {
        if (s2[i] >= 'A' && s2[i] <= 'Z')
        {
            s2[i] = s2[i] + 32;
        }
    }

    bool found = false;
    for (int i = 0; i < n1; i++)
    {
        if (s1[i] > s2[i])
        {
            cout << 1;
            found = true;
            break;
        }
        else if (s1[i] < s2[i])
        {
            cout << -1;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << 0;
    }

    cout << endl;

    return 0;
}
