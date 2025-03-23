#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , p1 , p2 , p3 , t1,  t2 , l , r;

    cin >> n >>  p1>> p2 >> p3 >> t1>>  t2 ;
    
    int count  = 0 , l_p = 0 ;

    cin >> l >> r ;

    count += (r-l)*p1 ;

    l_p = r ;

    n -= 1 ;

    while (n--)
    {
        cin >> l >> r ;

        int waste = l - l_p ;

        if (waste <= t1)
        {
            count+= waste*p1 ;
        }
        else if (waste > t1 && waste <= (t1+t2))
        {
            count+= (t1*p1) + (waste - t1)*p2 ;
        }
        else if ( waste > (t1+t2))
        {
            count += (t1*p1) + (t2*p2) + ((waste - (t1+t2))*p3);
        }

        count += (r-l)*p1 ;

        l_p = r ;

    }

    cout << count << endl ;
    


    
    


    
    
    return 0;
}