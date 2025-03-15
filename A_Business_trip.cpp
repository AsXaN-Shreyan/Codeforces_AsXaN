#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    vector < int > a(12) ;

    for (int i = 0; i < 12; i++)
    {
        cin >>  a[i] ;
    }

    sort(a.rbegin() , a.rend());

    int h = 0;
    int w = 0 ;

    for (int i = 0; i < 12; i++)
    {
        if (h < n )
        {
            h += a[i] ;
            w++ ;
        }
        
    }

    if ( h < n )
    {
        cout << -1 << endl;
    }
    else
    {
        cout << w << endl ;
    }
    
    

    
    
    
    
    return 0;
}