#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vi a;
  vi b;
  string input;
  cin >> input;
  for (char c : input) {
    a.push_back(c - '0');
  }
  cin >> input;
  for (char c : input) {
    b.push_back(c - '0');
  }
  int needed = 0;
  int free = 0;
  for (int i = 0; i < n; i += 2) {
    if (a[i] == 1) {
      needed++;
    }
  }
  for (int i = 1; i < n; i += 2) {
    if (b[i] == 0) {
      free++;
    }
  }
  if (free < needed) {
    cout << "no" << endl;
    return;
  } else {
    needed = 0;
    free = 0;
  }
  for (int i = 1; i < n; i += 2) {
    if (a[i] == 1) {
      needed++;
    }
  }
  for (int i = 0; i < n; i += 2) {
    if (b[i] == 0) {
      free++;
    }
  }
  if (free < needed) {
    cout << "no" << endl;
    return;
  } else {
    cout << "Yes" << endl;
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
