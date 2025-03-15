#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int x , y ;

    while (t--)
    {
        cin >> x >> y ;

        if (x > y)
        {
            cout << y << ' ' << x << endl ;
        }
        else if (x < y)
        {
            cout << x << ' '  << y << endl;
        }
        else
        {
            cout << x << ' '  << y << endl;
        }
        
        
        

    }
    
    
    
    return 0;
}