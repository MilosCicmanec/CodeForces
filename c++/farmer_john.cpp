#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> cows(n, vector<int>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> cows[i][j];
    }
  }

  for (auto &i : cows) {
    sort(i.begin(), i.end());
  }
  vector<pair<int, int>> pairs;
  for (int i = 0; i < n; i++) {
    pairs.push_back(make_pair(cows[i][0], i));
  }
  sort(pairs.begin(), pairs.end());
  vi p;
  for (auto i : pairs) {
    p.push_back(i.second);
  }
  int top_card = -1;
  for (int i = 0; i < m; i++) {
    for (auto j : p) {
      if (top_card > cows[j][i]) {
        cout << -1 << endl;
        return;
      }
      top_card = cows[j][i];
    }
  }
  for (auto i : p)
    cout << i + 1 << " ";
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
