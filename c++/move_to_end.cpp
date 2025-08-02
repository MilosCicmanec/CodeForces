#include <bits/stdc++.h>
using namespace std;
using vi = vector<long long>;

void solve() {
    long long n;
    cin >> n;

    // load input
    vi nums(n);
    vi dp(n);
    vi sum(n);

    for (long long i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // input done
    dp[0] = nums[0]; // 13 5 10 14 8 15 13 dp = [13,13,13,14,14,15,15]

    for (long long i = 1; i < n; ++i) {
        if (nums[i] > dp[i - 1]) {
            dp[i] = nums[i];
        } else {
            dp[i] = dp[i - 1];
        }
    }

    long long tmp = 0; // 13 5 10 14 8 15 13 sum =[0,13,28,36,50,60,65] [65,60,50,36,28,13,0]

    for (long long i = n -1; i > 0; --i) {
        tmp += nums[i];
        sum[i] = tmp;
        
    }
    reverse(dp.begin(),dp.end());
    sum.insert(sum.end(), 0);
    reverse(sum.begin(), sum.end());
    for (int i = 0; i < n; ++i)
    {
        cout << dp[i] + sum[i] << " ";
    }
    

    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;
    while (t--) solve();
    return 0;
}
