#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, l;
    cin >> n >> l;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    
    sort(a.begin(), a.end());

    double d = 0;

    
    d = max(d, (double)a[0]);

    
    d = max(d, l - a[n - 1]);

    
    for (int i = 1; i < n; i++)
    {
        d = max(d, (double)(a[i] - a[i - 1]) / 2);
    }

    
    cout << fixed << setprecision(10) << d << endl;

    return 0;
}
