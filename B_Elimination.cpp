#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        int a , b , c , d ;

        cin >> a >> b >> c >> d ;

        // int sum = a+b+c+d ;

        // int count = (a+b)/2 + (c+d)/2 ;

        // // if (a ==0 && b == 0)
        // // {
        // //     cout << 2 << endl ;
        // // }

        // cout << count+1 << endl ;
        
        // if (sum % 2 == 0 )
        // {
        //     cout << count << endl ;
        // }
        // else
        // {
        //     cout << count+1 << endl ;
        // }
        
        

       int mx = max(a+b , c+d);

       cout << mx << endl ;

     
    }
    
    
    return 0;
}