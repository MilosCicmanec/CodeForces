#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int bigger = max(a, b);
  int smaller = min(a, b);
  if (bigger % 2 == 1) {
    bigger += 1;
  }
  if (smaller < ((bigger / 2) - 1)) {
    cout << "no" << endl;
    return;
  }

  c = c - a;
  d = d - b;
  bigger = max(c, d);
  smaller = min(c, d);
  if (bigger % 2 == 1) {
    bigger += 1;
  }
  if (smaller < ((bigger / 2) - 1)) {
    cout << "no" << endl;
    return;
  } else {
    cout << "yes" << endl;
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
