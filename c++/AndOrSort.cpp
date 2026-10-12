#include <bits/stdc++.h>
#include <climits>
#include <iterator>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  ll mod = 1000000007;
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (s[0] == '1') {
    int res = 0;
    for (auto a : s) {
      if (a != '1') {
        res++;
      }
    }
    cout << res << endl;
    return;
  }

  int zeros_total = 0;
  int ones_total = 0;
  int zeros_seen = 1;
  int ones_seen = 0;
  for (char c : s) {
    if (c == '1') {
      ones_total++;
    } else {
      zeros_total++;
    }
  }
  int minimum = INT_MAX;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == '1') {
      minimum = min(minimum, ones_seen + zeros_total - zeros_seen);
      ones_seen++;
    } else {
      minimum = min(minimum, ones_seen + zeros_total - zeros_seen - 1);
      zeros_seen++;
    }
  }
  cout << minimum << endl;
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
