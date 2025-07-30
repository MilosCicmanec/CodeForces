#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    string a,b;
    cin >> a >> b;
    vi num1;
    vi num2;
    for (char c : a) {
        num1.push_back(c - '0');
    }   
    for (char c : b) {
        num2.push_back(c - '0');
    }
    // input is now handled
    for (int i = 0; i < num1.size(); ++i) {
        if (num1[i] == num2[i])
        {
            cout << 0;
        } else {
            cout << 1;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
