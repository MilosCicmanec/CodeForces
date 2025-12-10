#include <bits/stdc++.h>
#include <climits>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  ll n, x;
  cin >> n >> x;
  vector<ll> coins(n);
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
  }
  vector<ll> sum(x + 1, LONG_LONG_MAX);
  sum[0] = 0;
  for (int i = 0; i < x + 1; i++) {
    for (ll coin : coins) {
      if (i + coin < x + 1 && sum[i] != LONG_LONG_MAX) {
        sum[i + coin] = min(sum[i + coin], sum[i] + 1);
      }
    }
  }
  if (sum[x] == LONG_LONG_MAX) {
    cout << -1 << endl;
  } else {
    cout << sum[x] << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
  return 0;
}
