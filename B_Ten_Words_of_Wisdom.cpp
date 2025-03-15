#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        int n , a , b ;
        cin >> n ;

        // int co


        int index = 0 ;

        int count = 0 ;

        for (int i = 1; i <= n; i++)
        {
            cin >> a >> b ;

        // }

        
        // // int index = 0 ;

        // // int count = 0 ;

        // for (int i = 1; i <= n; i++)
        // {
        //     // int count = 0 ;
            
            // if (a < 10)
            // {
                if (a <= 10 && b > count)
                {
                    count = b ;
                    index = i ;
                }
                
            // }
            

        }



        cout << index << endl ;

        
        
        


    }
    

    
    
    return 0;
}