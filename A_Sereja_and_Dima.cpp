#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int a[n] ;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s = 0 ;
    int d = 0 ;
    int l = 0;
    int r = (n-1);
    int x = 0 ;
    

    while (l <= r)
    {
        if (x%2 == 0)
        {
            if (a[l] > a[r])
            {
                s+= a[l] ;
                l++;
            }
            else
            {
                s += a[r];
                r--;
            }
            
            
        }
        else
        {
            if (a[l] > a[r])
            {
                d += a[l] ;
                l++;
            }
            else
            {
                d += a[r];
                r--;
            }
            
        }
        x++ ;
        
        
    }

    cout << s << " " << d << endl ;
    
    
    
    return 0;
}