#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, m, b;

    while (t--) {
        cin >> n >> m;

        vector<int> a(n);  

        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cin >> b;

        if (b > 5) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
