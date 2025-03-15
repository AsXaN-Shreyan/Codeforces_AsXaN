#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;

    int fuck(a), shit(a), bull(0), crap(0);

    for (int i = 1; i < n; ++i)
    {
        cin >> a;

        if (a > shit)
        {
            shit = a;
            crap = i;
        }
        if (a <= fuck)
        {
            fuck = a;
            bull = i;
        }
    }
    int ans = crap + (n - 1 - bull) - (bull < crap ? 1 : 0);
    cout << ans << endl;
    
    
    return 0;
}