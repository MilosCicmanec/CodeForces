#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  ll n, tmp;
  cin >> n;
  set<ll> nums;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    nums.insert(tmp);
  }
  cout << nums.size() << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
  return 0;
}
