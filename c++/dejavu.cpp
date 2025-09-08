#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  string input;
  cin >> input;
  vector<char> a;
  vector<char> b;
  for (char c : input) {
    a.push_back(c);
    b.push_back(c);
  }
  a.push_back('a');
  b.push_back('a');
  reverse(b.begin(), b.end());
  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[i]) {
      cout << "yes" << endl;
      for (char c : a)
        cout << c;
      cout << endl;
      return;
    }
  }
  reverse(b.begin(), b.end());
  a.pop_back();
  b.pop_back();
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  a.push_back('a');
  b.push_back('a');
  reverse(a.begin(), a.end());
  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[i]) {
      cout << "yes" << endl;
      for (char c : a)
        cout << c;
      cout << endl;
      return;
    }
  }
  cout << "no" << endl;
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
