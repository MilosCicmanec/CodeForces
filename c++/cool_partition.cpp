#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vi nums(n);
    unordered_map<int,int> freq;
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];

    }
    for (int num : nums)
    {
        freq[num]++;
    }
    int max_freq = 1;
    for (const auto& [key,value] :freq)
    {
        max_freq = max(max_freq,value);
    }
    cout << max_freq << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
