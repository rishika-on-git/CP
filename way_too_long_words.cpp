#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s.length() <= 10)
        {
            cout << s << endl;
        }
        else
        {
            int res = s.length() - 2;
            cout << s[0] << res << s[s.length() - 1] << endl;
        }

       
    }

     return 0;
}