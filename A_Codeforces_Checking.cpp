#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    
    int count = 0 ;
    
    while (t--)
    
    {
        string s ;
        cin >> s; 


        for (int i = 0; i < s.length() ; i++)
        {
        
  
            if (s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'o' || s[i] == 'r' || s[i] == 'c' || s[i] == 'e'|| s[i] == 's')
            {
                count = 1 ;
            }
            else
            {
                count = 0 ;
            }
            
        }

        if (count == 1)
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