#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
  ll mod = 998244353;
  int n;
  cin >> n;
  string s;
  cin >> s;

  vector<char> odd;
  vector<char> even;
  for (int i = 0; i < n; i++) {
    if ((i % 2) == 0) {
      even.push_back(s[i]);
    } else {
      odd.push_back(s[i]);
    }
  }

  bool flipper = false;
  ll ways_odd = 2;
  for (char a : odd) {
    if (flipper) {
      if (a == '1' || a == '?') {
        flipper = false;
        continue;
      } else {
        ways_odd--;
        break;
      }
    } else {
      if (a == '0' || a == '?') {
        flipper = true;
        continue;
      } else {
        ways_odd--;
        break;
      }
    }
  }

  flipper = true;
  for (char a : odd) {
    if (flipper) {
      if (a == '1' || a == '?') {
        flipper = false;
        continue;
      } else {
        ways_odd--;
        break;
      }
    } else {
      if (a == '0' || a == '?') {
        flipper = true;
        continue;
      } else {
        ways_odd--;
        break;
      }
    }
  }

  ll ways_even = 2;
  flipper = true;
  for (char a : even) {
    if (flipper) {
      if (a == '1' || a == '?') {
        flipper = false;
        continue;
      } else {
        ways_even--;
        break;
      }
    } else {
      if (a == '0' || a == '?') {
        flipper = true;
        continue;
      } else {
        ways_even--;
        break;
      }
    }
  }

  flipper = false;
  for (char a : even) {
    if (flipper) {
      if (a == '1' || a == '?') {
        flipper = false;
        continue;
      } else {
        ways_even--;
        break;
      }
    } else {
      if (a == '0' || a == '?') {
        flipper = true;
        continue;
      } else {
        ways_even--;
        break;
      }
    }
  }

  cout << (ways_even * ways_odd) % mod << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
