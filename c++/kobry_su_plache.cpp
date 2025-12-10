#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  string input;
  getline(cin, input);
  vector<char> a = {'~', 'O', '='};
  ll idx = 0;
  ll cur = 0;
  ll res = 0;
  for (char c : input) {
    if (idx == 0) {
      if (c == a[idx]) {
        idx++;
      }
    } else if (idx == 1) {
      if (c == a[idx]) {
        idx++;
      } else if (c == '~') {
        continue;
      } else {
        idx = 0;
      }
    } else {
      if (c == a[idx]) {
        cur++;
      } else if (c == '>') {
        res = res + cur + 2;
        cur = 0;
        idx = 0;
      } else {
        cur = 0;
        idx = 0;
      }
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
