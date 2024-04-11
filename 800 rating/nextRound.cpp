

// #include <iostream>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;
    
//     int cnt = 0;
//     int arr[n];

//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }

//     int k_score = arr[k - 1];

//     for (int i = 0; i < n; ++i) {
//         if (arr[i] >= k_score && arr[i] > 0) {
//             cnt++;
//         }
//     }

//     cout << cnt << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int advancers = 0;
    int k_score;

    for (int i = 1; i <= n; ++i) {
        int score;
        cin >> score;

        if (i == k) {
            k_score = score;
        }

        if (score > 0 && i >= k && score >= k_score) {
            advancers++;
        }
    }

    cout << advancers << endl;

    return 0;
}
