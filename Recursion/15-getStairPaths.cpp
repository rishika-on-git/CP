
#include <iostream>
using namespace std;

// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 or 3 steps. In how many distinct ways can you climb to the top?

// Example 1:

// Input: n = 2
// Output: {11 , 2}
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps
// Example 2:

// Input: n = 3
// Output: {111 ,12 , 21 , 3}
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step
// 3. 3 steps

// get path vale questions mai we basically have to return the list so the addition is done in post order

// call for n-1 , n-2 , n-3
vector<string> getStairPaths(int n)
{
    if (n < 0)
    {
        return vector<string>();
    }
    if (n == 0)
    {
        vector<string> base;
        base.push_back("");
        return base;
    }

    vector<string> paths1 = getStairPaths(n - 1);
    vector<string> paths2 = getStairPaths(n - 2);
    vector<string> paths3 = getStairPaths(n - 3);

    vector<string> paths;

    for (auto it : paths1)
    {
        paths.push_back("1" + it);
    }

    for (auto it : paths2)
    {
        paths.push_back("2" + it);
    }

    for (auto it : paths3)
    {
        paths.push_back("3" + it);
    }

    return paths;
}
