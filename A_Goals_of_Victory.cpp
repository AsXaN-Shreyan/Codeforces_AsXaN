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

        int a[n];

        for (int i = 0; i < (n-1); i++)
        {
            cin >> a[i] ;


        }

        int count1 = 0;
        int count2 = 0;

        for (int i = 0; i < (n-1); i++)
        {
            if (a[i] > 0)
            {
                count1 += a[i];
            }
            else
            {
                count2 += a[i];
            }
            
            
        }

        int result = count1 + count2 ;

        cout << (result*-1) << endl ;
        
        
    }
    
    
    
    return 0;
}