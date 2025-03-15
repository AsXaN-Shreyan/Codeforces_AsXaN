#include <bits/stdc++.h>
using namespace std;

int main()
{
    // long long n , t ;
    // cin >> n >> t ;

    // if (t / n >= 10)
    // {
    //     cout << -1 << endl ;
    // }
    // else
    // {
    //     long long count = pow(10 , (n-1)) * t ;
    
    //     cout << count << endl ;
    // }
    
    int n, t;

    cin >> n >> t;

    if (n == 1 && t == 10)
    {
        cout << -1;
    }

    else if (t == 10 && n > 1)

    {
        for (int i = 0; i < (n-1); i++)
        {
            cout << 1;
        }
        cout << 0;
    }

    else
    
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
        
    }
    
    return 0;
}
