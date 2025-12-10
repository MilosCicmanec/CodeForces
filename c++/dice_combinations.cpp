#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  ll n;
  ll mod = 1000000007;
  cin >> n;
  vector<ll> sum(n + 1, 0);
  sum[0] = 1;
  for (int i = 0; i < n + 1; i++) {
    for (int j = 1; j < 7; j++) {
      if (i + j < n + 1) {
        sum[i + j] = (sum[i] + sum[i + j]) % mod;
      }
    }
  }
  cout << sum[n] << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
  return 0;
}
