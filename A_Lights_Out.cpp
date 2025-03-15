#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1 , x2 , x3 , x4 , x5 , x6, x7 , x8 , x9 ;

    int count1 , count2 , count3 , count4 , count5 , count6, count7 , count8 , count9 ; 
    
    cin >> x1 >> x2 >> x3 ;
    cin >> x4 >> x5 >> x6 ;
    cin >> x7 >> x8 >> x9 ;

    if ((x1 + x2 + x4) % 2 == 0)
    {
        count1 = 1 ;
    }
    else
    {
        count1 = 0 ;
    }

    if ((x1 + x2 + x3 + x5) % 2 == 0)
    {
        count2 = 1 ;
    }
    else
    {
        count2 = 0 ;
    }

    if ((x6 + x2 + x3) % 2 == 0)
    {
        count3 = 1 ;
    }
    else
    {
        count3 = 0 ;
    }

    ///////////////////

    if ((x1 + x5 + x4 + x7) % 2 == 0)
    {
        count4 = 1 ;
    }
    else
    {
        count4 = 0 ;
    }

    if ((x4 + x2 + x6 + x5 + x8) % 2 == 0)
    {
        count5 = 1 ;
    }
    else
    {
        count5 = 0 ;
    }

    if ((x3 + x5 + x9 + x6) % 2 == 0)
    {
        count6 = 1 ;
    }
    else
    {
        count6 = 0 ;
    }

    //////////////////

    if ((x7 + x4 + x8) % 2 == 0)
    {
        count7 = 1 ;
    }
    else
    {
        count7 = 0 ;
    }

    if ((x9 + x7 + x5 + x8) % 2 == 0)
    {
        count8 = 1 ;
    }
    else
    {
        count8 = 0 ;
    }

    if ((x8 + x6 + x9) % 2 == 0)
    {
        count9 = 1 ;
    }
    else
    {
        count9 = 0 ;
    }
    
    cout << count1 << count2 << count3 << endl ;
    cout << count4 << count5 << count6 << endl ;
    cout << count7 << count8 << count9 << endl ;

    return 0;
}