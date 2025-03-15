#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t ;
    cin >> t ;

    
    while (t--)
    {
        long long  s , d , p , ans = 0 ;
        cin >> s ;

        

        while ( 1)
        {
            d = (s/10) * 10 ;

            ans += d ;

            p = s- d ;

            s = (s/ 10 ) + p ;

            if (s < 10)
            {
               ans += s ;
               break;
            }


            



            
        }

        cout << ans << endl ;
        
        

 

        
    }


    
    
    
    return 0;
}