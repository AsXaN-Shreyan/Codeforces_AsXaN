#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        int n ;
        cin >> n ;

        int a[n] ;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i] ;
        }

        int count = 0 ;

        sort(a , a+n);

        for (int i = 0; i < n; i++)
        {
            count = (2*(a[n-1] - a[0]) + 2*(a[n-2] - a[1]) );
        }

        cout << count << endl ;
        
         

    }
    
    
    return 0;
}