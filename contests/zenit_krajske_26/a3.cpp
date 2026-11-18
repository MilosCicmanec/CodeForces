#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  int n;
  cin >> n;
  string s;
  int res = 1;
  for (int i = 0; i < n; i++) {
    cin >> s;
    for (char c : s) {
      if (c == '0' || c == '4' || c == '6' || c == '9') {
        res++;
      } else if (c == '8') {
        res += 2;
      }
    }
  }
  cout << res << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  while (t--)
    solve();
  return 0;
}
