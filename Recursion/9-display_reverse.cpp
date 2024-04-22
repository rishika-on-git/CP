#include <iostream>

using namespace std;

void printArr(int *arr, int size, int i)
{
    if (i == size)
    {
        return;
    }

   
    printArr(arr, size, i + 1);
     cout << arr[i] << " ";
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size, 0);
    return 0;
}