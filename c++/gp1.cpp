#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  ll mod = 1000000007;
  int n;
  cin >> n;
  vector<vector<char>> grid(n, vector<char>(n));

  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    for (int j = 0; j < n; j++) {
      grid[i][j] = tmp[j];
    }
  }
  vector<vl> dp(n, vector<ll>(n, 0));
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
  return 0;
}
