#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--) {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;

        
        long long int count = 0;

        
        if (b > a) {
            count++;
        }
        
        if (c > a) {
            count++;
        }
        
        if (d > a) {
            count++;
        }

        cout << count << endl;
    }

    return 0;
}
