#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <ctime>

using namespace std;

bool evaluateExpression(vector<bool> values, vector<string> ops) {
    // Step 1: Reduce all 'and'
    for (size_t i = 0; i < ops.size();) {
        if (ops[i] == "and") {
            bool result = values[i] && values[i + 1];
            values.erase(values.begin() + i);
            values[i] = result;
            ops.erase(ops.begin() + i);
        } else {
            ++i;
        }
    }

    // Step 2: Reduce all 'or'
    for (size_t i = 0; i < ops.size();) {
        bool result = values[i] || values[i + 1];
        values.erase(values.begin() + i);
        values[i] = result;
        ops.erase(ops.begin() + i);
    }

    return values[0]; // Final result: true (Alice wins), false (Bob wins)
}

bool simulateStrategicGame(const string& s, mt19937& rng) {
    vector<bool> values;
    for (char c : s)
        values.push_back(c == '1');

    vector<string> ops(s.size() - 1); // placeholder for n - 1 operators
    vector<int> used(s.size() - 1, 0); // track placed ops

    int turn = 0; // 0: Alice, 1: Bob

    for (int moves = 0; moves < (int)s.size() - 1; ++moves) {
        // Try to find the best index for this player
        int bestIdx = -1;

        for (int i = 0; i < (int)used.size(); ++i) {
            if (used[i]) continue;

            bool a = values[i], b = values[i + 1];

            if (turn == 0) { // Alice's turn
                if (!a && !b) { // prefers and on 0-0
                    bestIdx = i;
                    break;
                }
            } else { // Bob's turn
                if ((a && !b) || (!a && b)) { // prefers and on 1-0 or 0-1
                    bestIdx = i;
                    break;
                }
            }
        }

        // If no preferred move, choose random unused position and assign "or"
        int chosenIdx = bestIdx;
        string op = "and";

        if (chosenIdx == -1) {
            // pick random unused index
            vector<int> unused;
            for (int i = 0; i < (int)used.size(); ++i)
                if (!used[i]) unused.push_back(i);

            uniform_int_distribution<int> dist(0, (int)unused.size() - 1);
            chosenIdx = unused[dist(rng)];
            op = "or"; // fallback move
        }

        ops[chosenIdx] = op;
        used[chosenIdx] = 1;
        turn ^= 1; // switch player
    }

    return evaluateExpression(values, ops); // true = Alice wins
}

string monteCarloWinnerStrategic(const string& s, int simulations = 10000) {
    mt19937 rng(static_cast<unsigned int>(time(nullptr)));
    int aliceWins = 0;

    for (int i = 0; i < simulations; ++i) {
        if (simulateStrategicGame(s, rng))
            ++aliceWins;
    }

    return (aliceWins > simulations / 2) ? "YES" : "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        cout << monteCarloWinnerStrategic(s) << "\n";
    }

    return 0;
}
