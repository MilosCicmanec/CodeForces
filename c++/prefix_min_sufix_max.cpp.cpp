#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vi nums(n);
  for (int i = 0; i < n; i++)
    cin >> nums[i];
  vi minimum(n);
  minimum[0] = nums[0];
  for (int i = 1; i < n; i++) {
    minimum[i] = min(minimum[i - 1], nums[i]);
  }
  vi maximum(n);
  maximum[n - 1] = nums[n - 1];
  for (int i = 1; i < n; i++) {
    maximum[n - i - 1] = max(maximum[n - i], nums[n - i - 1]);
  }
  vi res;
  for (int i = 0; i < n; i++) {
    if (minimum[i] >= nums[i] || maximum[i] <= nums[i]) {
      res.push_back(1);
    } else {
      res.push_back(0);
    }
  }
  for (int c : res) {
    cout << c;
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
