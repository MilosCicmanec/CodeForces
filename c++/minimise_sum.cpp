#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vi arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << min(arr[0], arr[1]) + arr[0] << endl;
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
