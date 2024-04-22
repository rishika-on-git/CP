#include <iostream>
using namespace std;

void print_inc(int *arr, int n, int i)
{
    if (i == n)
    {
        return;
    }

    print_inc(arr, n, i + 1);
    cout << arr[i] << " ";
}

int main()
{
    int arr[] = {1, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    int n = sizeof(arr) / sizeof(int);
    print_inc(arr, n, 0);
    return 0;
}