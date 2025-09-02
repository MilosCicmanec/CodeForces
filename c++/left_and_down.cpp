#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  ll a, b, k;
  cin >> a >> b >> k;
  if ((a / gcd(a, b)) <= k && (b / gcd(a, b)) <= k) {
    cout << 1 << endl;
    return;
  }
  cout << 2 << endl;
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
