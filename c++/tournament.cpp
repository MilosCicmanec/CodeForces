#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  int n, j, k;
  cin >> n >> j >> k;
  vi nums(n);
  ll mx = -12;
  for (int i = 0; i < n; i++){
    cin >> nums[i];
    mx = max(mx,nums[i]);
  }
  if (k > 1)
  {
    cout << "yes" << endl;
    return;
  } else {
    if (nums[j-1] == mx)
    {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
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
