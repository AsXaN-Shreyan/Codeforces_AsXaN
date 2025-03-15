#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ;
    cin >> s ;

    int count = 0 ;

    bool result = false ;

    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' ||s[i] == '9' )
        {
            result = true ;
            break;

        }
        
    }

    if (result)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    


    
    
    return 0;
}