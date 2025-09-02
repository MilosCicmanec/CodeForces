#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;
  vi sums(k);
  for (int i = 0; i < k; i++) {
    int b, c;
    cin >> b >> c;
    sums[b - 1] += c;
  }
  sort(sums.begin(), sums.end());
  ll res = 0;
  for (int i = 0; i < n && i < k; i++)
    res += sums[k - i - 1];
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
