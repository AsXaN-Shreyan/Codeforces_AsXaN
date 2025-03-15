#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        long long int r , b , d ;

        cin >> r >> b >> d ;

        long long int count1 = min( r , b ) ;
        long long int count2 = max(r , b);


        if ( count2 <= count1 * (d+1) )
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