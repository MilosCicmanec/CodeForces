#include <bits/stdc++.h>
using namespace std;

void processTestCase() {
    string l, r;
    cin >> l >> r;

    if (l == r) {
        cout << 2 * l.size() << '\n';
        return;
    }

    int commonPrefix = 0;
    int n = l.size();
    
    while (commonPrefix < n && l[commonPrefix] == r[commonPrefix]) {
        ++commonPrefix;
    }

    // If the first differing digits have enough gap
    if (l[commonPrefix] + 1 < r[commonPrefix]) {
        cout << 2 * commonPrefix << '\n';
    } else {
        int result = 2 * commonPrefix + 1;
        for (int i = commonPrefix + 1; i < n; ++i) {
            if (l[i] == '9' && r[i] == '0') {
                ++result;
            } else {
                break;
            }
        }
        cout << result << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        processTestCase();
    }

    return 0;
}
