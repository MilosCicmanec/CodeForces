#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int loop;
    cin >> loop;
    int l,r;
    int L,R;
    int start;
    int end;
    for (int i =0; i < loop; i++) {
        cin >> l >> r;
        cin >> L >> R;
        start = max(l,L);
        end = min(r,R);
        if (start > end) {
            if (r + 1 == L || R + 1 == l ) {
                cout << 1 << endl;
            
            } else {
                cout << 2 << endl;
            }
        
        } else {
            cout << end -start +1<< endl;
        }
    
    }   
    return 0;
}