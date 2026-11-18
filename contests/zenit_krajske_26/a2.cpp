#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  vl nums(5);
  int x;

  for (int i = 0; i < 5; i++) {
    cin >> x;
    nums[i] = x;
  }
  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); i++) {
    if (i < 4) {
      cout << nums[i] << " ";
    } else {
      cout << nums[i] << endl;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  while (t--)
    solve();
  return 0;
}
