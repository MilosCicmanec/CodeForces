#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main () {
    int num_of_loops;
    cin >> num_of_loops;
    string input;
    for (int i =0 ; i < num_of_loops; i++) {
        cin >> input;
        for (char &c : input) {
            c = tolower(c);
        }
        if (input == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    
    }
    return 0;
}