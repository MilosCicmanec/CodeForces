#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  int n;
  cin >> n;
  vl nums(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  set<pair<int, int>> happy;

  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < n; j++) {
      ll tmp = nums[j];
      ll res = 0;
      while (tmp > 0) {
        ll sq = tmp % 10;
        res += sq * sq;
        tmp /= 10;
      }
      nums[j] = res;
    }
  }
  int res = 0;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] == nums[j]) {
        res++;
      }
    }
  }
  cout << res << endl;
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
