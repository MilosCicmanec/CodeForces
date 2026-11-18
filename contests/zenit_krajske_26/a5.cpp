#include <bits/stdc++.h>
#include <vector>

using namespace std;
using vi = vector<int>;
using ll = long long;
using vl = vector<long long>;

void solve() {
  vector<string> words;
  vi nums;
  string inp;
  getline(cin, inp);
  string word;
  int tmp;
  stringstream ss(inp);
  while (ss >> word) {
    nums.push_back(stoi(word));
  }
  int sum = 0;
  bool error = false;
  int ec = 0;
  for (int i = 0; i < nums.size() - 1; i++) {
    if (!error && nums[i] % 2 == 0) {
      sum += nums[i];
      cout << sum << " ";
    } else if (ec < 10) {
      error = true;
      cout << "ERROR" << " ";
      ec++;
    } else {
      cout << "TEROR" << " ";
    }
  }
  if (!error && nums[nums.size() - 1] % 2 == 0) {
    sum += nums[nums.size() - 1];
    cout << sum << endl;
  } else if (ec < 10) {
    error = true;
    cout << "ERROR" << endl;
    ec++;
  } else {
    cout << "TEROR" << endl;
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
