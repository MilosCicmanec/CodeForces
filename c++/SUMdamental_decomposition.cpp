#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    int bits = __builtin_popcountll(x);

    if (n <= bits) {
        cout << x << '\n';
        return;
    }

    int diff = n - bits;

    if (diff % 2 == 0) {
        cout << x + diff << '\n';
    } else {
        if (x > 1) {
            cout << x + diff + 1 << '\n';
        } else if (x == 1) {
            cout << n + 3 << '\n';
        } else { // x == 0
            if (n == 1) {
                cout << -1 << '\n';
            } else {
                cout << n + 3 << '\n';
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
