#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

bool win(vi w, vi z) {
  int ww = 0;
  int zw = 0;
  for (int i : w) {
    for (int j = 0; j < z.size(); j++) {
      if (z[j] > i) {
        zw++;
      } else if (z[j] < i) {
        ww++;
      }
    }
  }
  if (ww < zw)
    return true;
  return false;
}

void solve() {
  vi nums(6, 0);
  for (int i = 0; i < 6; i++)
    cin >> nums[i];
  int total = 0;
  for (auto i : nums) {
    total += i;
  }
  vi c = nums;
  for (int i = 0; i < c.size(); i++) {
    c[i] = c[i] + 1;
  }
  c.push_back(0);
  for (auto s1 : c)
    for (auto s2 : c)
      for (auto s3 : c)
        for (auto s4 : c)
          for (auto s5 : c)
            for (auto s6 : c) {
              if (win(nums, {s1, s2, s3, s4, s5, s6}) &&
                  (s1 + s2 + s3 + s4 + s5 + s6) == total) {
                cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5
                     << " " << s6 << endl;
                return;
              } else if ((win(nums, {s1, s2, s3, s4, s5, s6}) &&
                          (s1 + s2 + s3 + s4 + s5 + s6) < total)) {
                cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5
                     << " " << s6 + total - (s1 + s2 + s3 + s4 + s5 + s6)
                     << endl;
                return;
              }
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
