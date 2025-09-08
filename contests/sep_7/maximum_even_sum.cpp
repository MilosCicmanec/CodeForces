#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  ll a, b;
  cin >> a >> b;
  vector<long long> factors;
  ll n = b;
  while (n % 2 == 0) {
    factors.push_back(2);
    n = n / 2;
  }
  for (int i = 3; i * i <= n; i = i + 2) {
    while (n % i == 0) {
      factors.push_back(i);
      n = n / i;
    }
  }
  if (n > 2) {
    factors.push_back(n);
  }
  ll res = -1;

  if ((a + b) % 2 == 0) {
    res = max(res, a + b);
  }
  for (ll i : factors) {
    b = b / i;
    a = a * i;
    if ((a + b) % 2 == 0) {
      res = max(res, a + b);
    }
  }
  cout << res << endl;
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
