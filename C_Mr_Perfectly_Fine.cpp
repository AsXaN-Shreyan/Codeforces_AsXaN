#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  t , n , p   ;
    string s ;
    cin >> t ;

    while (t--)
    {
        cin >> n   ;

        long long  ans11 =  2000000 ;
        long long  ans10 = 2000000 ;
        long long  ans01 = 2000000 ;


        for (int i = 0; i < n; i++)
        {
            cin >>  p ; cin >> s ;

            if (s == "11")
            {

                if ( p < ans11  )
                {
                    ans11 = p ;
                }
                
            }

            else if (s == "01")
            {
                if ( p < ans01  )
                {
                    ans01 = p ;
                }
            }

            else if (s == "10")
            {
                if ( p < ans10  )
                {
                    ans10 = p ;
                }
            }
            // else
            // {
            //     n = 0 ;
            // }
            


            // cout << ans11 << " " << ans10 << " " << ans01 << endl ;
            
            
            

        }

        //cout << ans11 << " " << ans10 << " " << ans01 << endl ;

        // if (ans11 == 2000000 && ans10 < 2000000 && ans10 < 2000000)
        // {
        //     cout << ans10 + ans01 << endl ;
        // }
        // else if (ans11 < 2000000 && ans10 == 2000000 && ans10 == 2000000)
        // {
        //     cout << ans11 << endl ;
        // }
        // else
        // {
        //     cout << "-1" << endl ;
        // }

        long long ansCOM = ans10 + ans01 ;
        //long long FUCKans = ans10 + ans11 +  ans01 ;


        
        // else if (ans11 == 2000000 && (ans10 == 2000000 || ans01 == 2000000))
        // {
        //     cout << -1 << endl ;
        // }

        // 
        
        if (ans10 == 2000000 || ans01 == 2000000) 
        {
            if (ans11 == 2000000)
            {
                cout << -1 << endl;
            }  
            else
                {
                    cout << ans11 << endl;
                }  
        }
        else 
        {
            cout << min(ans11, ansCOM) << endl;  // Choose the best option
        }
    }
  
    
    return 0;




}




