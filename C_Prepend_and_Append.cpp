#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t , n ;
    cin >> t ;

    while (t--)
    {
        cin >> n ;
        string s;
        cin >> s ;

        int count = 0 ;

        // for (int i = 1; i <= n-1 ; i++)
        // {
        //     if (s[i] == '1' && s[n-i] == '0')
        //     {
        //         count++ ;
                
        //     }
        //     else if (s[i] == '0' && s[n-i] == '1')
        //     {
        //         count++ ;
        //     }
        //     else
        //     {
        //         break;
        //     }
            
            
            
        // }

        while (!s.empty() && s.front() != s.back())
        {
            s.pop_back();
            s.erase(s.begin());
            count += 2;
        }

        cout << n -count << endl;

        
    }
    
    
    
    return 0;
}