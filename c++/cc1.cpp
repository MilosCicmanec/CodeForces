#include <bits/stdc++.h>
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
  ll mod = 1000000007;
  vector<ll> sum(x + 1, 0);
  sum[0] = 1;
  for (ll i = 0; i < x + 1; i++) {
    for (auto coin : coins) {
      if (i + coin < x + 1) {
        sum[i + coin] += sum[i];
        sum[i + coin] = sum[i + coin] % mod;
      }
    }
  }
  cout << sum[x] << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
  return 0;
}
