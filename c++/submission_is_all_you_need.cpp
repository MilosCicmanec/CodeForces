#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vi input(n);
  for (int i = 0; i < n; i++) {
    cin >> input[i];
  }
  int res = 0;
  int zeros = 0;
  int ones = 0;
  for (ll i : input) {
    if (i >= 2) {
      res += i;
    } else if (i == 0) {
      zeros++;
    } else {
      ones++;
    }
  }
  while (zeros > 0 && ones > 0) {
    zeros--;
    ones--;
    res += 2;
  }
  res += zeros;
  res += ones;
  cout << res << endl;
  return;
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
