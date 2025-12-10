#include <bits/stdc++.h>
#include <utility>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {

  int n, k;
  cin >> n >> k;
  vi input(n);
  for (int i = 0; i < n; i++) {
    cin >> input[i];
  }

  sort(input.begin(), input.end());
  map<int, int> freq;
  for (int num : input) {
    freq[num]++;
  }

  vector<pair<int, int>> tuples;
  for (auto &pair : freq)
    tuples.push_back(make_pair(pair.second, pair.first));
  sort(tuples.begin(), tuples.end());
  vi nums;
  for (auto &pair : tuples)
    nums.push_back(pair.first);
  int idx = 0;
  for (int i = 0; i < nums.size() - 1; i++) {
    if (k <= 0 || nums[i] > k) {
      break;
    }
    if (k >= nums[i]) {
      nums[nums.size() - 1] += nums[i];
      idx = i + 1;
      k = k - nums[i];
    }
  }
  int res = 0;
  for (int i = idx; i < nums.size(); i++) {
    res++;
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
