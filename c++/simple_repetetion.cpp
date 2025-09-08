#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  ll x, k;
  cin >> x >> k;
  if (x == 1 && k == 2) {
    cout << "Yes" << endl;
    return;
  } else if (x == 1) {
    cout << "no" << endl;
    return;
  }
  if (k >= 2) {
    cout << "NO" << endl;
    return;
  }
  bool prime = true;
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      prime = false;
      break;
    }
  }
  if (prime) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
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
