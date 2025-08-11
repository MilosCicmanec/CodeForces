#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll r = 0;
    ll l = 0;
    k--;
    for (int i = k - 1; i >= 0; i--) {
        if (s[i] == '.') l++;
        else break;  
    }
    for (int i = k + 1; i < n; i++) {
        if (s[i] == '.') r++;
        else break;  
    }
    cout << min(l, r) + 1 << '\n';

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    solve();
    return 0;
}
