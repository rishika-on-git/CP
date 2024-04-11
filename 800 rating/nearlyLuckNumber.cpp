#include <iostream>
using namespace std;

// bool isLucky(int n){
//     while(n!=0){
//         int digit = n%10;
//         if(digit!=4 && digit!=7){
//             return false;
//         }
//         n = n/10;
//     }
//      return true;
// }
// int main()
// {
//     long long n;
//     cin >> n;

//     int count4 = 0;
//     int count7 = 0;
//     int totalDigits = 0;

//     while (n != 0)
//     {
//         int digit = n % 10;
//         if (digit == 4)
//         {
//             count4++;
//         }
//         else if (digit == 7)
//         {
//             count7++;
//         }
//         totalDigits++;
//         n = n / 10;
//     }

//     if (isLucky(count4+count7))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count += 1;
        }
        n /= 10;
    }

    // 10^18 tak jayegi n ki value to maximum 18 digits ho sakti hai to lucky count can only be 7 or 4
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}


// or


#include <iostream>
using namespace std;

bool isLucky(int n)
{
    while (n != 0)
    {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}
int main()
{
    long long n;
    cin >> n;

    int count4 = 0;
    int count7 = 0;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 4 || digit == 7)
        {
            count4++;
        }

        n = n / 10;
    }
    if (count4 == 0)
    {
        cout << "NO" << endl;
    }
    else if (count4 != 0)
    {
        if (isLucky(count4))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}