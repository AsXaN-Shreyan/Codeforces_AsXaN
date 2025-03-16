#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        string s ;
        cin >> s ;

        int zero = 0 , one = 0 , move = 0 ;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zero++ ;
            }
            else
            {
                one++ ;
            }
            
            
        }

        

        if (zero <= one)
        {
            move = zero ;
        }
        else
        {
            move = one ;
        }

        //move = max(zero , one);

        // int index = 0 ;

        // //cout << one << " " << zero << " " << move << endl ;

        // for (int i = 1; i <= move; i++)
        // {
        //     // zero-- ;
        //     // one-- ;

        //     if (zero == 0 || one == 0)
        //     {
        //         index = i ;
        //         break;
        //     }

        //     zero-- ;
        //     one-- ;
            
            
        // }

        //cout << index << endl ;

        if (move % 2 == 0)
        {
            cout << "NET" << endl ;
        }
        else
        {
            cout << "DA" << endl ;
        }
        
        
       
    }
    
    
    
    return 0;
}