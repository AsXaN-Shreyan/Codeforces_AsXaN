#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t , n ;
    cin >> t ;
    int x , y;

    for (int i = 0 ; i < t; i++)
    {
        cin >> n ;

        y = n % 10 ;

        x = n / 10 ;

        cout << ( x + y) << endl ;

        
    }
    
    
    return 0;
}