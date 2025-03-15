#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int x , y , n ;

    int count = 0 ;

   

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> n ;

        int a = 0 ;

        a = (n - y) / x ;

        count = (a*x) + y ;

        cout << count << endl ;


    }
    
    
    return 0;
}