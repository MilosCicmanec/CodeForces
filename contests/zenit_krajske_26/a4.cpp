#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  vector<string> lines;
  string str;
  int tmp = 0;
  while (getline(cin, str)) {
    tmp++;
    if (tmp == 1001) {
      break;
    } else if (str.empty()) {
      continue;
    } else {
      lines.push_back(str);
    }
  }
  int wl = 0;
  int res = 0;
  for (string s : lines) {
    stringstream ss(s);
    while (ss >> str) {
      res++;
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
