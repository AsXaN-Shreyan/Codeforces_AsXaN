#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t , n ;
    cin >> t ;

    while (t--)
    {
        cin >> n ;

        vector < int > a(n);

        for (int i = 0; i < n ; i++)
        {
            cin >> a[i] ;
        }

        //vector < int > b(n , 0) ;

        int count = 0 ;

        int count_2 = 0 ;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                count++ ;

                count_2 = max(count , count_2);


            }
            else
            {
                //b[i] += count+1 ;

                count = 0 ;

            
            }
            
            
        }

        // for (int i = 0; i < b.size(); i++)
        // {
        //     cout << b[i] << " "  ;
        // }
        // cout << endl ;
        

        cout << count_2 << endl ;
        
        
    }
    
    
    
    return 0;
}