#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<char> v;
    char c;
    for (int i = 0; i < n; i++) {
        cin >> c;
        v.push_back(c);
    }

    int i = 0;
    // Remove duplicates
    for (int j = 1; j < n; j++) {
        if (v[i] != v[j]) {
            v[i + 1] = v[j];
            i++;
        }
    }

    // New size
    int res = i + 1;

    cout << n - res << endl;

    return 0;
}
