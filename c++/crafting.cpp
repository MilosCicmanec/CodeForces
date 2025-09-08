#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vi a(n);
  vi b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  vi diff(n);
  for (int i = 0; i < n; i++) {
    diff[i] = b[i] - a[i];
  }
  int biggest = 0;
  for (int i = 0; i < n; i++) {
    if (diff[i] > diff[biggest]) {
      biggest = i;
    }
  }
  for (int i = 0; i < n; i++) {
    if (i == biggest) {
      a[i] += diff[biggest];
    } else {
      a[i] -= diff[biggest];
    }
  }
  bool res = true;
  for (int i = 0; i < n; i++) {
    if (a[i] >= b[i]) {
      continue;
    } else {
      res = false;
      break;
    }
  }
  if (res) {
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
