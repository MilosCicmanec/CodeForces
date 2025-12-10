#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  ll mod = 1000000007;
  ll n;
  ll res = 0;
  cin >> n;
  while (n > 0) {
    ll tmp = n;
    ll mx = LONG_LONG_MIN;
    while (tmp > 0) {
      ll s = tmp % 10;
      mx = max(mx, s);
      tmp /= 10;
    }
    n -= mx;
    res++;
  }
  cout << res << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
  return 0;
}
