#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  int n;
  cin >> n;
  vl nums(n, 2);
  for (int i = 1; i < n; i++) {
    nums[i] = nums[i - 1] * 2;
  }
  for (ll x : nums) {
    cout << x << " ";
  }
  cout << endl;
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
