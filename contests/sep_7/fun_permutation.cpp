#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vi a(n);
  vi res(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if (n == 2) {
    if (a[0] == 1) {
      cout << 2 << " " << 1 << endl;
      return;
    } else {
      cout << 1 << " " << 2 << endl;
      return;
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == n) {
      res[i] = n;
    } else {
      res[i] = n - a[i];
    }
  }
  for (int i : res)
    cout << i << " ";
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
