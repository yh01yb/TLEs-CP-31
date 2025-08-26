#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int prev = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, a[i] - prev);
        prev = a[i];
    }
    ans = max(ans, 2 * (x - prev));

    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
