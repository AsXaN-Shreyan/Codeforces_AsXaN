#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t-- )
    {
        int n , k , ans ;
        cin >> n >> k ;

        map<int , int > m;

        for (int i = 1; i <=   n; i++)
        {
            int x ;
            cin >> x ; 
        
            if (  m[k-x] > 0)
            {
                m[k-x]-- ;
                ans++ ;
            }
            else
            {
                m[x]++ ;
            }
            
            
        }

        cout << ans << endl ;
        
    }
    
    
    
    return 0;
}