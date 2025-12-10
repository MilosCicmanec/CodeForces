#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  ll n;
  cin >> n;
  if (n == 1) {
    cout << 1 << endl;
    return;
  }
  if (n == 2) {
    cout << 2 << endl;
    return;
  }
  if (n == 3) {
    cout << 2 << endl;
    return;
  }
  ll res = 2;
  ll pot = 4;
  while (pot < n) {
    pot = (pot + 1) * 2;
    res++;
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
