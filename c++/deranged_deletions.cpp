#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vi nums(n);
  vi unsorted(n);
  int index;
  int ptr = 0;
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    unsorted[i] = nums[i];
  }
  sort(nums.begin(), nums.end());
  vi diff;
  for (int i = 0; i < n; i++) {
    if (unsorted[i] == nums[i]) {
      diff.push_back(i);
    }
  }
  if (n == 1) {
    cout << "no" << endl;
    return;
  }
  if (diff.size() == 0) {
    cout << "yes" << endl;
    cout << n << endl;
    for (ll i : unsorted)
      cout << i << " ";
    cout << endl;
    return;
  }
  if (n - diff.size() > 0) {
    cout << "yes" << endl;
    cout << n - diff.size() << endl;
    for (int i = 0; i < n; i++) {
      if (i != diff[ptr]) {
        cout << unsorted[i] << " ";
      } else {
        ptr++;
        if (ptr == diff.size()) {
          ptr = 0;
        }
      }
    }
    cout << endl;
    return;
  }
  cout << "no" << endl;
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
