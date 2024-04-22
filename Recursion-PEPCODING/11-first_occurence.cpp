#include <iostream>

using namespace std;

int firstOcc(int *arr, int i, int size, int ele)
{
    if (i == size)
    {
        return -1;
    }

    if (arr[i] == ele)
    {
        return i;
    }

    return firstOcc(arr, i + 1, size, ele);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]));
    int ele ;
    cin >> ele;
    int ans = firstOcc(arr, 0, size, ele);

    cout << ans << endl;

    return 0;
}