#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(m); 

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    long long count = 0;
    int cp = 1; 

    for (int i = 0; i < m; i++)
    {
        if (a[i] >= cp)
        {
            count += a[i] - cp;
        }
        else
        {
            count += n - (cp - a[i]);
        }
        cp = a[i]; 
    }

    cout << count << endl;

    return 0;
}
