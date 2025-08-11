#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        sort(a.begin(), a.end());

        int ans = 0;
        int j = 0;
        for (int i = 0; i < n; ++i) {
            j = max(j, i);
            while (j + 1 < n && a[j + 1] - a[j] <= 1 && a[j + 1] - a[i] < k) {
                ++j;
            }
            ans = max(ans, j - i + 1);
        }
        cout << ans << '\n';
    }

    return 0;
}
