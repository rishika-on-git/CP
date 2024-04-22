#include <iostream>
using namespace std;

void pzz(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << ("Pre" + n) << endl;
    pzz(n - 1);
    cout << ("In" + n) << endl;
    pzz(n - 1);
    cout << ("Post" + n) << endl;
}


/// there are 3 regions pre in and post .
// call region print region.

// for n=2 --> o/p is          

// pre 2
// pre 1
// in 1
// post 1
// in2 
// pre 1
// in 1
// post 1
// post 2

int main()
{   

    int n;
    cout << "Enter a number: ";
    cin >> n;
    pzz(n);
    return 0;

}