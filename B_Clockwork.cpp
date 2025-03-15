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

        vector<int> a(n) ;

        int count =0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i] ;
        }
        

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= i*2 || a[i] <= ((n-i -1)*2))
            {
                count = 1 ;
            }
            
        }

        if (count == 1)
        {
            cout << "NO" << endl ;
        }
        else
        {
            cout << "YES" << endl ;
        }
        
        
        
    }
    
    
    
    return 0;
}