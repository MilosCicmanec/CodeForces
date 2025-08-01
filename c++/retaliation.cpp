#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);

    for (auto &x : a) cin >> x;

    
    long long d = a[1] - a[0];
    for (int i = 2; i < n; ++i) {
        if (a[i] - a[i - 1] != d) {
            cout << "NO\n";
            return;
        }
    }

    
    for (int i = 0; i < n; ++i) {
        if (d > 0) {
            a[i] -= d * (i + 1);         
        } else {
            a[i] += (-d) * (n - i);      
        }
    }


    cout << ((a[0] >= 0 && a[0] % (n + 1) == 0) ? "YES\n" : "NO\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
