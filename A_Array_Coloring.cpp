#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        int n ;
        cin >> n ;

        int a[n] ;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i] ;
        }

        sort(a , a+n);

        bool result = false ;

        for (int j = (n-1); j > 0; j-- )
        {
            if (a[j] == a[j-1])
            {
                result = true ;
            }
            
        }

        if (result)
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