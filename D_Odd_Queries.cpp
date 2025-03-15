#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int n , q ;

    int l , r , k ;

    
    while (t--)
    {
       cin >> n >>q ;

       vector<int> ar(n) ;

       vector<int> pref(n+1) ;


       pref[0] = 0 ;

       for (int i = 0; i < n; i++)
       {
          cin >> ar[i] ;

          pref[i+1] = pref[i] + ar[i] ;

       }

       int zero = pref[n] ;

       //int line = ar.size() ;

       int sum1 , sum2 ;


       for (int i = 0; i < q; i++)
       {
          cin >> l >> r  >> k ;
       
          sum1 = pref[r] - pref[l-1];

          sum2= k*((r-l)+1);

         // cout << sum1 << " " << l << " " << r << " " << sum2 << endl ;

         int def = sum1 - sum2 ;

         int def2 = zero - def ;

         //cout << def << " " << def2 << endl ;

         if (def2 % 2 ==0)
         {
            cout << "NO" << endl ;
         }
         else
         {
            cout << "YES" << endl ;
         }
         
         


       }
       

       
      
       
       

    }
    
    
    
    return 0;
}