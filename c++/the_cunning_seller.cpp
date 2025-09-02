#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  ll n;
  cin >> n;
  ll res = 0;
  while (n > 0) {
    float tmp = 0;
    tmp = log(n) / log(3);
    tmp = floor(tmp);
    n -= pow(3, tmp);
    res += pow(3, tmp + 1);
    res += tmp * pow(3, tmp - 1);
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
