#include <iostream>
#include <vector>
#include <set>
#include <algorithm> // ✅ Needed for min_element and max_element
using namespace std;

int mex(const vector<int>& v) {
    set<int> s(v.begin(), v.end());
    for (int i = 0; i <= 3; ++i) {
        if (!s.count(i)) return i;
    }
    return 4;
}

bool isValidTriplet(vector<int> triplet) {
    int mx = *max_element(triplet.begin(), triplet.end());
    int mn = *min_element(triplet.begin(), triplet.end());
    int m = mex(triplet);
    return (m == mx - mn);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool allMissing = true;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] != -1) allMissing = false;
        }

        if (allMissing) {
            cout << "YES" << endl;
            continue;
        }

        bool bad = false;
        for (int i = 0; i <= n - 3; ++i) {
            vector<int> triplet = {a[i], a[i+1], a[i+2]};
            int countNeg = 0;
            for (int x : triplet) if (x == -1) ++countNeg;

            if (countNeg == 0) {
                if (!isValidTriplet(triplet)) {
                    bad = true;
                    break;
                }
            } else if (countNeg == 1) {
                int pos = -1;
                for (int j = 0; j < 3; ++j) {
                    if (triplet[j] == -1) pos = j;
                }
                vector<int> known;
                for (int x : triplet) if (x != -1) known.push_back(x);
                int m = mex(known);
                int mn = min(known[0], known[1]);
                int mx = max(known[0], known[1]);

                int candidate1 = mx - m;
                int candidate2 = m + mn;

                bool ok = false;
                for (int val : {candidate1, candidate2}) {
                    if (val < 0 || val > 100) continue;
                    vector<int> filled = triplet;
                    filled[pos] = val;
                    if (isValidTriplet(filled)) {
                        ok = true;
                        break;
                    }
                }

                if (!ok) {
                    bad = true;
                    break;
                }
            }
        }

        cout << (bad ? "NO" : "YES") << endl;
    }
    return 0;
}
