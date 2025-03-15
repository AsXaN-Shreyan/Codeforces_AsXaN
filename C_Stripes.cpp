#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int count = 0;

        
        for (int i = 0; i < 8; i++) {
            string s;
            cin >> s;

            int r = 0; 
            
            
            for (int j = 0; j < 8; j++) {
                if (s[j] == 'R') {
                    r++;
                }
            }

           
            if (r == 8) {
                count++;
            }
        }

        
        //cout << count << endl;

        
        if (count > 0) {
            cout << "R" << endl;
        } else {
            cout << "B" << endl;
        }
    }

    return 0;
}
