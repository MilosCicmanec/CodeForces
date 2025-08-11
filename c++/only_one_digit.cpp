#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vi num;
  while (n > 0) {
    num.push_back(n % 10);
    n /= 10;
  }
  int smallest = 10;
  for (int i : num) {
    smallest = min(smallest, i);
  }
  cout << smallest << endl;
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
