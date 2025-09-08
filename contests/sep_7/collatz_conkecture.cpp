#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  ll n, k;

  cin >> k >> n;

  cout << n * (1LL << k) << "\n";
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
