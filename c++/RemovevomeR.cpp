#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  ll mod = 1000000007;
  int x;
  cin >> x;
  string n;
  cin >> n;
  vector<string> nums(n.size(), "");
  for (int i = 0; i < n.size(); i++) {
    nums[i] = n[i];
  }
  ll transitions = 0;
  for (int i = 1; i < n.size(); i++) {
    if (n[i] != n[i - 1]) {
      transitions++;
    }
  }
  if (transitions == 1) {
    cout << 2 << endl;
  } else {
    cout << 1 << endl;
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
