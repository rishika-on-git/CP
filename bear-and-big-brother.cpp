#include <iostream>
using namespace std;

int main()
{
    int limak, bob;

    cin >> limak >> bob;
    int cnt = 0;
    while (limak <= bob)
    {
        limak = limak * 3;
        bob = bob * 2;
        cnt++;
    }

    cout << cnt;
}