#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    string s1 , s2 , s3 ;

    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> s ;

    //     if (s == "?")
    //     {

    //     }
        
        
    // }

    while (t-- )
    {
        cin >> s1 ;
        cin >> s2 ;
        cin >> s3 ;

        int a = 0 ;
        int b = 0 ;
        int c = 0 ;

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == 'A')
            {
                a++ ;
            }
            else if (s1[i] == 'B')
            {
                b++ ;
            }
            else if (s1[i] == 'C')
            {
                c++ ;
            }
            
            
            
        }

        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] == 'A')
            {
                a++ ;
            }
            else if (s2[i] == 'B')
            {
                b++ ;
            }
            else if (s2[i] == 'C')
            {
                c++ ;
            }
            
            
            
        }

        for (int i = 0; i < s3.size(); i++)
        {
            if (s3[i] == 'A')
            {
                a++ ;
            }
            else if (s3[i] == 'B')
            {
                b++ ;
            }
            else if (s3[i] == 'C')
            {
                c++ ;
            }
            
            
            
        }

        if (a == 3 && b ==3 && c== 2)
        {
            cout << "C" << endl ;
        }
        else if (a == 2 && b ==3 && c== 3)
        {
            cout << "A" << endl ;
        }
        else if (a == 3 && b ==2 && c== 3)
        {
            cout << "B" << endl ;
        }
        
        
        
        
    }
    
    

    
    
    return 0;
}