#include <bits/stdc++.h>
#include <numeric>

using namespace std;
using vi = vector<int>;
using ll = long long;

void solve() {
  ll n, m, k;
  cin >> n >> m >> k;
  vi questions(m);
  vi learned(k);
  for (int i = 0; i < m; i++)
    cin >> questions[i];
  for (int i = 0; i < k; i++)
    cin >> learned[i];
  if ((n - k) >= 2) {
    for (int i = 0; i < m; i++)
      cout << 0;
    cout << endl;
    return;
  } else if (n == k) {
    for (int i = 0; i < m; i++)
      cout << 1;
    cout << endl;
    return;
  }
  // n-k == 1
  ll total = (n * (n + 1)) / 2;
  ll sum = accumulate(learned.begin(), learned.end(), 0LL);
  ll missing = total - sum;
  for (int i : questions) {
    if (i == missing) {
      cout << 1;
    } else {
      cout << 0;
    }
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
