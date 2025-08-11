#include <bits/stdc++.h>
using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;
  vi s(n);
  vi t(n);
  vi residue_s(k, 0);
  vi residue_t(k, 0);

  for (int i = 0; i < n; i++)
    cin >> s[i];
  for (int i = 0; i < n; i++)
    cin >> t[i];

  for (int x : s)
    residue_s[(x + k) % k]++;
  for (int x : t)
    residue_t[(x + k) % k]++;

  for (int i = 0; i < k; i++) {
    if (residue_s[i] != residue_t[i]) {
      cout << "no\n";
      return;
    }
  }
  cout << "yes\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tc;
  cin >> tc;
  while (tc--)
    solve();
  return 0;
}
