#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)

    {
        cin >> a[i];
    }

    long long int sum = 0;

    for (int i = 0; i < n; i++) 
    {
        sum += a[i];
    }

    sort(a.begin(), a.end());

    if (sum % 2 == 0) 
    {
        cout << sum << endl;
    }

    else

    {
        bool result = false;
        
        for (int j = 0; j < n; j++) 
        {
            if ((sum - a[j]) % 2 == 0)
             
            {
                cout << sum - a[j] << endl;
                result = true;
                break;
            }
        }

        
        if (!result) {
            cout << 0 << endl; 
        }
    }

    return 0;
}
