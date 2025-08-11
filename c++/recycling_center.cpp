#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  int n, c;
  cin >> n >> c;
  vi bag(n);
  for (int i = 0; i < n; i++)
    cin >> bag[i];
  sort(bag.begin(), bag.end());
  int counter = 1;
  for (int x =0; x  < n; x++) {
    bool found = false;
    for (int i = n-1; i >=0; i--) {
      if ((bag[i]*counter) <= c) {
        bag.erase(bag.begin() + i);
        found = true;
        counter *=2;
        break;
      }
    }
    if (found == false) {
      cout << bag.size() << endl;
      return;
    }
  }
  cout << 0 << endl;
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
