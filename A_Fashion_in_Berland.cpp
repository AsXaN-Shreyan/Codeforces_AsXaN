#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    vector< int > s(n) ;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i] ;
    }
    

    if (n == 1 )
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 1)
            {
                cout << "YES" << endl ;
            }
            else
            {
                cout << "NO" << endl ;
            }
            
            
        }
        
    }
    else
    {
        int count_1 = 0 ;
        int count_0 = 0 ;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 1)
            {
                count_1++ ;
            }
            else
            {
                count_0++ ;
            }
            
            
        }

        if (count_0 > 1 || count_1 == n)
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