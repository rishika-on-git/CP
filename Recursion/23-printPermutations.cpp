#include <iostream>
using namespace std;

// print permutations m hme sirf ek letter p choice nhi lgani hai ki use lena hai ya nhi.. we need to see ki kya is current position p vo ayega ya nhi
// mtb 1 position p 3 letter string m 3 options hai.

void permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        permutation(ros, ans + ch);
    }
}

int main()
{

    string s;

    cin >> s;
    permutation(s, "");
    return 0;
}