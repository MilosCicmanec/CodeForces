#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;
using ll = long long;

bool sim(vi& flowers,vi& beauty){
    ll ptr = 0;
    for (int i = 0; i < flowers.size(); ++i)
    {
        if (flowers[i] >= beauty[ptr])
        {
            ptr +=1;
            if (ptr == beauty.size())
            {
                return true;
            }
        }
    }
    return false;
}
bool sim_with_del(vi& flowers, vi& beauty, ll index) {
    ll ptr = 0;
    for (int i = 0; i < flowers.size(); ++i)
    {
        if (index == ptr) {
            ptr +=1;
        }
        if (flowers[i] >= beauty[ptr])
        {
            ptr +=1;
        }
        if (ptr >= beauty.size())
        {
                return true;
        }

    }
    return false;
}




void solve() {
    ll n,m;
    cin >> n >> m;
    vi a(n);
    vi b(m);
    for (int i = 0; i<n; i++) cin >> a[i];
    for (int i = 0; i<m; i++) cin >> b[i];
    if (sim(a, b)) {
        cout << 0 << endl;
        return;
    }
    ll l,r;
    l = 0;
    r = -1;
    for (ll i  : b) r = max(r,i);
    ll res = -1;
    
    while (l <= r) {
        ll mid = (l+r)/2;
        
        for (int i= 0; i < m; i++) {
            bool found = false;
            if (b[i] == mid && sim_with_del(a, b,i)) {
                found = true;
                if (res == -1) {
                    res = mid;
                } else {
                    res = min(res,mid);
                }
            }
            if (found) {
                r = mid-1;
            } else {
                l = mid+1;
            }
            cout << "r " << r << "l " << l << endl;
        }
    }
    cout << res << endl;
    return;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
