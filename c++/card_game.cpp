#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // true = alice false = bob
    vector<char> input(n);
    int bob = 0 ;
    for (int i = 0; i < n; ++i)
    {
        cin >> input[i];
        if (input[i] == 'B')
        {
            bob += 1;
        }
    }
    
    if (n == 2)
    {
        if (input[0] == 'A')
        {
            cout << "Alice" << endl;
            return;
        } else {
            cout << "Bob" << endl;
            return;
        }
    }




    if ((input[0] == 'A') && (input[n-1] == 'A'))
    {
        cout << "Alice" << endl;
    } else  if ((input[0] == 'B') && (input[n-1] == 'B'))
    {
        cout << "Bob" << endl;
    } else if ((input[n-1] == 'B') && (input[0] == 'A'))
    {
        if (bob > 1)
        {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    } else if ((input[n-1] == 'A') && (input[0] == 'B'))
    {
        if (input[n-2] == 'A')
        {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
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
