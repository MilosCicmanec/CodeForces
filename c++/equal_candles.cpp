#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vi candles(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> candles[i];
    }
    // input done
    sort(candles.begin(),candles.end());
    int min;
    min = candles[0];
    int sum = 0;
    for (int i :candles) {
        if (i-min > 0)
        {
            sum = sum + i - min;
        }
    }
    cout << sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
