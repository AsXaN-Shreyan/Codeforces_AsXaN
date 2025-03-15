#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  t , x , y , a , b  ;
    cin >> t ;

    while (t--)
    {
        cin >> x >> y >> a >> b ;

        long long ans1 = min(x, y) *b + abs(x-y)*a ;

        long long ans2 = (x+y)*a ;

        cout << min(ans1 , ans2) << endl ;



    
    }
    
    
    
    return 0;
}