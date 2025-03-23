#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        string s;
        cin >> s;

        int count = 0;
        int n = s.size();

        
        if (n == 1 && s[0] == '^') 
        {
            cout << 1 << endl;
            continue;
        }

        
        if (s[0] == '_') count++;

        
        for (int j = 0; j < n - 1; j++) {
            if (s[j] == '_' && s[j + 1] == '_') 
            {
                count++; 
            }
        }

        
        if (s[n - 1] == '_') count++;

        cout << count << endl;
    }

    return 0;
}
