#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  ll mod = 1000000007;
  ll n, x;
  cin >> n >> x;
  vl coins(n);
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
  }
  vl dp(x + 1);
  dp[0] = 1;
  for (int j = 0; j < n; j++) {
    for (int i = 0; i < x + 1; i++) {
      if (i + coins[j] < x + 1) {
        dp[i + coins[j]] = (dp[i] + dp[i + coins[j]]) % mod;
      }
    }
  }
  cout << dp[x] << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
