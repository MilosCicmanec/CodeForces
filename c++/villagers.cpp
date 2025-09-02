#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vi villagers(n);
  for (int i = 0; i < n; i++)
    cin >> villagers[i];
  ll res = 0;
  sort(villagers.begin(), villagers.end());
  if ((n % 2) == 1) {
    res += villagers[0];
    villagers.erase(villagers.begin());
  }
  for (int i = 1; i < villagers.size(); i += 2) {
    res += villagers[i];
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
