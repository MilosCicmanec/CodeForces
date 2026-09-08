#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<char> words(n, 'a');
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    s[0] = tolower(static_cast<unsigned char>(s[0]));
    words[i] = s[0];
  }
  bool found;
  bool res = true;
  for (int i = 0; i < m; i++) {
    cin >> s;
    for (char &c : s) {
      c = tolower(static_cast<unsigned char>(c));
      found = false;
      for (auto a : words) {
        if (c == a) {
          found = true;
          break;
        }
      }
      if (found == false) {
        res = false;
      }
    }
  }
  if (res) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
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
