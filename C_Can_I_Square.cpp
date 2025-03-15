#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t ;
    cin >> t ;

    while (t--)
    {
        int n ;
        cin >> n ;

        vector < int > a(n);

        long long  sum = 0 ;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i] ;

            sum += a[i] ;
        }

        long long  hex = sqrt(sum);

        // if (sum % hex == 0 && sum / hex == hex)
        if(hex * hex == sum)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
        
        
        
    }
    

    
    
    return 0;
}