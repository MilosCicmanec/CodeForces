#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  unordered_multiset<string> targets = {};
  int n;
  cin >> n;
  int res = 0;
  string word;
  string tmp;
  for (int i = 0; i < n; i++) {
    cin >> word;
    if (targets.find(word) != targets.end()) {
      res++;
      targets.erase(targets.find(word));
    } else {
      // if it is in there
      tmp = "";
      for (char c : word) {
        if (c == 'p') {
          tmp = tmp + 'q';
        } else if (c == 'q') {
          tmp = tmp + 'p';
        } else if (c == 'd') {
          tmp = tmp + 'b';
        } else if (c == 'b') {
          tmp = tmp + 'd';
        } else {
          tmp = tmp + c;
        }
      }
      reverse(tmp.begin(), tmp.end());
      targets.insert(tmp);
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
