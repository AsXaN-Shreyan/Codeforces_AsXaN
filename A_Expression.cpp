#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a  , b , c ;
    cin >> a ;
    cin >> b ;
    cin >> c ;

    int count1  = a + (b*c);
    int count2 = a*(b+c);
    int count3 = a*b*c ;
    int count4 = (a+b)*c ;
    int count5 = (a+b+c);

    int ans = max(count1 , max(count2 , max(count3 , max(count4 , count5))));

    cout << ans << endl ;
    
    
    return 0;
}