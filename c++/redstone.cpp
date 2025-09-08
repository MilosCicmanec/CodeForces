#include <bits/stdc++.h>
#include <set>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  set<int> b(a.begin(), a.end());
  if (a.size() == b.size()) {
    cout << "no" << endl;
  } else {
    cout << "yes" << endl;
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
