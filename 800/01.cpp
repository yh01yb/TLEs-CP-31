#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (k >= 2) {
            cout << "YES" << endl;
        } else {
            for (int i = 0; i < n - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    cout << "NO" << endl;
                    goto next_case; 
                }
            }
            cout << "YES" << endl;
        }
    next_case:;
    }
    return 0;
}
