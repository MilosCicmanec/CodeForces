#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  ll mod = 1000000007;
  int n, k;
  cin >> n >> k;
  vi nums(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  ll res = 0;
  while (nums.size() >= k) {
    if (nums[k - 1] >= nums[nums.size() - k]) {
      res += nums[k - 1];
      nums.erase(nums.begin() + k - 1);
    } else {
      res += nums[nums.size() - k];
      nums.erase(nums.begin() + nums.size() - k);
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
