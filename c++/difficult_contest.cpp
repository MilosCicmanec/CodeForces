#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  string text;
  cin >> text;
  int counter = 0;
  for (char c : text) {
    if (c == 'T') {
      ++counter;
    }
  }
  text.erase(std::remove(text.begin(), text.end(), 'T'), text.end());
  for (int i = 0; i < counter; i++) {
    cout << 'T';
  }
  cout << text << endl;
  return;
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
