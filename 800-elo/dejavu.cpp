#include <iostream>
#include <string>
using namespace std;

bool not_palindrome(const string& s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) return true;
        left++;
        right--;
    }
    return false;
}

int main() {
    int loop_counter;
    cin >> loop_counter;
    cin.ignore(); // To handle trailing newline after the integer input

    while (loop_counter--) {
        string s;
        getline(cin, s);
        bool found = false;

        for (int i = 0; i <= s.length(); ++i) {
            string temp = s;
            temp.insert(i, 1, 'a');
            if (not_palindrome(temp)) {
                cout << "YES" << endl;
                cout << temp << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
