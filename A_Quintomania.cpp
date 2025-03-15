#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

   

    while (n--)
    {
        int t ;
        cin >> t ;

         vector<int> s(t) ;

        for (int i = 0; i < t; i++)
        {
            cin >> s[i] ;
        }

        bool count = true ;

        for (int i = 0; i < t - 1  ; i++)
        {
            int interval = abs(s[i+1] - s[i]);

            if (interval != 5 && interval != 7)
            {
                count = false ;
                break;
            }
            

        }

        if (count)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
        
        
        

    }
    
    
    
    return 0;
}