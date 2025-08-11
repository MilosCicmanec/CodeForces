#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vi res;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      res.push_back(-1);
    } else {
      res.push_back(3);
    }
  }
  if (n % 2 == 0) {
    res[n - 1]--;
  }
  for (int i : res) {
    cout << i << " ";
  }
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
