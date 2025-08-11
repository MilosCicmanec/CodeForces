#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;

void solve() {
    long long n,k;
    cin >> n >> k;
    vi left_gloves(n);
    vi righ_gloves(n);

    for (long long i = 0; i < n; ++i)
    {
        cin >> left_gloves[i];
    }
    for (long long i = 0; i < n; ++i)
    {
        cin >> righ_gloves[i];
    }
    vi bigger(n);
    vi smaller(n);
    for (long long i = 0; i < n; ++i)
    {
        bigger[i] = max(left_gloves[i],righ_gloves[i]);
        smaller[i] = min(left_gloves[i],righ_gloves[i]);
    }
    long long res = accumulate(bigger.begin(),bigger.end(),0);
    sort(smaller.begin(),smaller.end());
    for (long long i = 0; i < (k-1); ++i)
    {
        res += smaller[n-1-i];
    }
    cout << res+1 << endl;
    




}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
