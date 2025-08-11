#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vi a(n);
  vi b(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];
  int smaller = 0;
  int bigger = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > b[i]) {
      bigger += a[i] - b[i];
    } else if (b[i] > a[i]) {
      smaller += b[i] - a[i];
    }
  }
  cout << bigger + 1 << endl;
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
