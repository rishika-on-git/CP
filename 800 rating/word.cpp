#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
  int upper =0;
  int lower =0;
    // count uppercase characters
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }

    // count lowercase characters
    // if upperCount > lowerCount --> PRINT ALL IN UPPER CASE else PRINT ALL IN lower CASE

    if (upper > lower)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }

            cout << s[i];
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }

            cout << s[i];
        }
    }

  return 0;
}