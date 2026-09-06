#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  vl nums(3, 0);
  cin >> nums[0] >> nums[1] >> nums[2];
  sort(nums.begin(), nums.end());
  ll res = 0;
  while (true) {
    if (nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2]) {
      cout << res << endl;
      return;
    }
    res++;
    nums[2]--;
    nums[0]++;
    sort(nums.begin(), nums.end());
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
