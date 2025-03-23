#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , h , m   ;
    cin >> n ;

    cin >> h >> m ;
    int i_h = h ;
    int i_m = m ;

    int ans = 1 , cash = 1 ;

    for (int i = 0; i < n-1; i++)
    {
        cin >> h >> m ;

        

        //ans = 0 ;

        if ((h == i_h) && (m == i_m))
        {
            cash++ ;

            if (cash > ans)
            {
                ans = cash;
            }

        }
        else
        {
            cash = 1 ;
        }


        i_h = h ;
        i_m = m ;
        
    }

    cout << ans << endl ;
    
    


    
    
    return 0;
}