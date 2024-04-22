#include <iostream>
using namespace std;

int lastOcc(int *arr, int i, int size, int ele) {
    if (i == size) {
        return -1;
    }

    int l = lastOcc(arr, i + 1, size, ele);

    if (l == -1) {
        if (arr[i] == ele) {
            return i;
        } else {
            return -1;
        }
    } else {
        return l;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ele;
    cin >> ele;

    int ans = lastOcc(arr, 0, n, ele);
    cout << ans << endl;
    return 0;
}
