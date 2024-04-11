#include <iostream>
using namespace std;

int main()
{
    int k, w, n;
    // k --> cost of initial banana
    // w --> initial money that he has
    // n --> no of bananas he want

    cin >> k >> w >> n;
    int cost = 0; // Initialize cost to 0
    for (int i = 1; i <= n; i++)
    {
        cost += k * i; // Calculate the cost of each banana
    }
  //  int cost = k * (n * (n + 1) / 2);
  
    // If the soldier has enough money to buy all the bananas,
    // output 0, otherwise output the amount he needs to borrow
    cout << max(0, cost - w) << endl;
    return 0;
}


