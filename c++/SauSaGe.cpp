#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  ll mod = 1000000007;
  ll n, k;
  cin >> n >> k;
  ll res = 0;
  res += pow(2, n - k + 1);
  res = res + (n - (n - k + 1)) * 2;
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
