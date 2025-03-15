#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int mf = 0;

        
        int e = a + b;
        int f = 0;
        if (e == a + b)
        {
         f++;
        }
        if (c == b + e)
        {
            f++;
        } 
        if (d == e + c) {
            f++;
        }
        mf = max(mf, f);

        
        e = c - b;
        f = 0;
        if (e == a + b) {
            f++;
        }
        if (c == b + e) {
            f++;
        }
        if (d == e + c) {
            f++;
        }
        mf = max(mf, f);

        
        e = d - c;
        f = 0;
        if (e == a + b) {
            f++;
        }
        if (c == b + e) {
            f++;
        }
        if (d == e + c) {
            f++;
        }
        mf = max(mf, f);

        cout << mf << endl;
    }

    return 0;
}
