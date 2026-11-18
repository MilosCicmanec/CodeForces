#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

string removeLeadingZeros(string str) {
  size_t pos = str.find_first_not_of('0');

  if (pos == string::npos)
    return "0";

  str.erase(0, pos);

  return str;
}

void solve() {
  string inp;
  cin >> inp;
  int r = 0;
  int tmp;
  string q = "";
  int counter = 0;
  while (true) {
    counter++;
    for (char c : inp) {
      tmp = c - '0';
      r = r * 10 + tmp;
      if (r % 2 == 1) {
        q = q + to_string((r - 1) / 2);
        r = 1;
      } else {
        q = q + to_string(r / 2);
        r = 0;
      }
    }
    inp = removeLeadingZeros(q);
    if (inp == "1") {
      cout << "ano" << endl;
      cout << counter << endl;
      return;
    }
    q = "";
    if (r != 0) {
      cout << "nie" << endl;
      return;
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
