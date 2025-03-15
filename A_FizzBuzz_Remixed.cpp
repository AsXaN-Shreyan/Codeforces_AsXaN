#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t , n  ;
    cin >> t ;

    while (t--)
    {
        cin >> n ;

        int count = 0 ;

        for (long long  i = 0; i <= n; i++)
        {
            if (i%3 == i%5)
            {
                count++ ;
            }
            
        }

        cout << count << endl ;
        
        
    }
    
    
    
    return 0;
}