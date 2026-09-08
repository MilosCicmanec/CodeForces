#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  string s;
  cin >> s;
  bool a, b;
  a = true;
  b = true;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '0' && a) {
      a = false;
      s[i] = 'x';
    } else if (s[i] == '1' && b) {
      s[i] = 'x';
      b = false;
    }
    if (a == false && b == false) {
      break;
    }
  }
  for (char c : s) {
    if (c != 'x') {
      cout << c;
    }
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
