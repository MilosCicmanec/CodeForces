#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  int n, m, q;
  cin >> n >> m >> q;
  int t1, t2;
  cin >> t1 >> t2;
  int d;
  cin >> d;
  if (t1 > d && t2 > d) {
    cout << d - 1 + min(t1 - d, t2 - d);
  } else if (t1 < d && t2 < d) {
    cout << (n - d) + min(d - t1, d - t2);
  } else {
    cout << abs(t1 - t2) / 2;
  }
  cout << endl;
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
