#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  // Read grid as integers instead of strings
  vector<vector<int>> grid(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    string row;
    cin >> row; // still read as string
    for (int j = 0; j < m; j++) {
      grid[i][j] = row[j] - '0'; // convert char to int (0 or 1)
    }
  }

  // Store positions of '1's
  vector<pair<int, int>> ones;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (grid[i][j] == 1) {
        ones.emplace_back(i, j);
      }
    }
  }

  // Build rows with integer logic instead of strings
  vector<vector<int>> rows(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    if (grid[i][0] == 0) {
      rows[i][0] = 0;
    } else {
      rows[i][0] = 1;
    }

    for (int j = 1; j < m; j++) {
      if (grid[i][j] == 1) {
        rows[i][j] = rows[i][j - 1] + 1; // increment previous value
      } else {
        rows[i][j] = rows[i][j - 1]; // keep previous value
      }
    }
  }
  vector<vector<int>> rotated(m, vector<int>(n));
  for (int i = 0; i < m; i++) {
    for (int x = 0; x < n; x++) {
      rotated[i][x] = grid[x][i];
    }
  }
  vector<vector<int>> columns(m, vector<int>(n));
  for (int i = 0; i < m; i++) {
    if (rotated[i][0] == 0) {
      columns[i][0] = 0;
    } else {
      columns[i][0] = 1;
    }
    for (int x = 1; x < n; x++) {
      if (rotated[i][x] == 1) {
        columns[i][x] = columns[i][x - 1] + 1;
      } else {
        columns[i][x] = columns[i][x - 1];
      }
    }
  }
  for (auto [r, c] : ones) {
    bool valid = false;
    if (rows[r][c] >= c) {
      valid = true;
    }
    if (columns[c][r] >= r) {
      valid = true;
    }
    if (valid == false) {
      cout << "no" << endl;
      return;
    }
  }
  // Check row prefix property
  bool valid = true;
  for (int i = 0; i < n; i++) {
    bool seenZero = false;
    bool seenOne = false;
    for (int j = 0; j < m; j++) {
      if (grid[i][j] == 1) {
        seenOne = true;
      }
      if (grid[i][j] == 0 && seenOne)
        seenZero = true;
      if (seenZero && grid[i][j] == 1) {
        valid = false;
        break;
      }
    }
  }

  // Check column prefix property
  for (int j = 0; j < m; j++) {
    bool seenZero = false;
    bool seenOne = false;
    for (int i = 0; i < n; i++) {
      if (grid[i][j] == 1) {
        seenOne = true;
      }
      if (grid[i][j] == 0 && seenOne)
        seenZero = true;
      if (seenZero && grid[i][j] == 1 && valid == false) {
        cout << "no" << endl;
        return;
      }
    }
  }
  cout << "yes" << endl;
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
