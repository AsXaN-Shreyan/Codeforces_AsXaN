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

        int arr[n] ;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int m = 0 ;
        int b = 0 ;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0 || arr[i] == 2)
            {
                m = m + arr[i] ;
            }
            else if ( arr[i] % 2 == 1 || arr[i] == 1 )
            {
                b = b + arr[i] ;
            }
            
        }

        

        if (m > b )
        {
            cout << "YES" << endl ;
        }
        else if ( m <= b )
        {
            cout << "NO" << endl ;
        }
        
        
        
        
    }
     
    
    
    return 0;
}