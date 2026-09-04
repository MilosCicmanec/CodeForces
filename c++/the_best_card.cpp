#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  int n;
  cin >> n;
  n++;
  int cnt = 0;
  bool is_prime = true;
  if (n <= 1) {
    is_prime = false;
  } else {
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        cnt++;
      }
    }
  }
  if (cnt > 0) {
    is_prime = false;
  }
  if (is_prime) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
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
