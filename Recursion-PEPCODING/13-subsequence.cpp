#include <iostream>
#include <vector>
using namespace std;

vector<string> getSSQ(string &s)
{
    // base case
    if (s.length() == 0)
    {
        vector<string> base;
        base.push_back("");
        return base;
    }

    char ch = s[0];
    string ss = s.substr(1);

    vector<string> v = getSSQ(ss);

    vector<string> myAns;

    for (auto it : v)
    {
        myAns.push_back(ch + it);
        myAns.push_back("" + it);
    }

    return myAns;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    vector<string> v = getSSQ(str);
    for (auto it : v)
    {
        cout << it << endl;
    }

    return 0;
}
