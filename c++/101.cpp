#include <bits/stdc++.h>
#include <iterator>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  ll mod = 1000000007;
  int n;
  cin >> n;
  vi nums(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  int ptx = 0;
  while (ptx < n - 1) {
    if (nums[ptx] == -1) {
      nums[ptx] = 1;
      break;
    } else if (nums[ptx] == 1) {
      break;
    }
    ptx++;
  }
  ptx = n - 1;
  while (ptx >= 0) {
    if (nums[ptx] == -1) {
      nums[ptx] = 1;
      break;
    } else if (nums[ptx] == 1) {
      break;
    }
    ptx--;
  }
  for (int i = 0; i < n; i++) {
    if (nums[i] == -1) {
      nums[i] = 0;
    }
  }
  for (int i : nums) {
    cout << i << " ";
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
