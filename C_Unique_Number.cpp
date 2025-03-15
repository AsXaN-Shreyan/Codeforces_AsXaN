#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        bool found = false;

        for (int i = 0; i <= 123456789; i++)
        {
            long long int count = i / 10 + i % 10;

            if (count == n)
            {
                cout << i << endl;
                found = true;
                break;
            }
        }

        if (!found) 
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
