#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;
  vi weather(n);
  for (int i = 0; i < n; i++)
    cin >> weather[i];
  int res = 0;
  vi breaks;
  int cur = 0;
  for (ll i : weather) {
    if (i == 0) {
      cur++;
    } else {
      if (i == 1 && cur > 0) {
        breaks.push_back(cur);
        cur = 0;
      }
    }
  }
  if (cur > 0) breaks.push_back(cur);
  for (ll i : breaks) {
    int tmp = (i+1) / (k + 1);
    res += tmp;
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
