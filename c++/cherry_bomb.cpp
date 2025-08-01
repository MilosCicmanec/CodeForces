#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n,k,x;
    cin >> n >> k;
    vi a(n);
    vi b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    
    if (accumulate(b.begin(),b.end(),0) == n * -1)
    {
        // empty
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        for (int i = 0; i < n; ++i)
        {
            minimum = min(minimum,a[i]);
            maximum = max(maximum,a[i]);
        }
        if ((0 <= (maximum - minimum)) && ((maximum - minimum)<= k))
        {
            cout << k - maximum + minimum + 1 << endl;
            return;
        } else {
            cout << 0 << endl;
            return;
        }
    } else {
        // first find x and then check if it is possible to build the whole list such as the equation holds
        for (int i = 0; i < n; ++i)
        {
            if (b[i] != -1)
            {
                x = a[i] + b[i];
                break;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            
            if (b[i] == -1)
            {
                if ( (0 <= (x - a[i])) && ((x - a[i]) <= k) )
                {
                    b[i] = x - a[i];
                    continue;
                } else {
                    cout << 0 << endl;
                    return;
                }
            } else {
                if (a[i] + b[i] != x)
                {
                    cout << 0 << endl;
                    return;
                }
            }
        }
        
        
        cout << 1 << endl;

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
