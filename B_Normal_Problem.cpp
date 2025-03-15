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
    string b = "";
       for (int i = s.length() - 1; i >= 0 ; i--)
    {

        


        if (s[i] == 'p')
        {
            b = b + 'q' ;
        }
        else if (s[i] == 'q')
        {
            b = b + 'p' ;
        }
        else
        {
            b = b +'w';
        }

       

        
    }

     cout << b << endl ;
    
    }
    
    
    return 0;
}
