#include <bits/stdc++.h>
#include <deque>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  ll n, m, k;
  cin >> n >> m >> k;
  deque<ll> a;
  deque<ll> b;
  ll tmp;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    a.push_back(tmp);
  }
  for (int i = 0; i < m; i++) {
    cin >> tmp;
    b.push_back(tmp);
  }
  ll res = 0;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  while (!a.empty() && !b.empty()) {
    if (abs(a[0] - b[0]) <= k) {
      res++;
      a.pop_front();
      b.pop_front();
    } else if (a[0] > b[0]) {
      b.pop_front();
    } else {
      a.pop_front();
    }
  }
  cout << res << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
  return 0;
}
