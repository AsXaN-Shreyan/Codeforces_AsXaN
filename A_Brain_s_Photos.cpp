#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ;
    cin >> n >> m ;

    int count = 0 ;

    for (int i = 0; i < n; i++)
    {
        string s ;

        cin >> s ;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'C' || s[i] == 'M'|| s[i] == 'Y')
        {
            count++ ;
            
        }
        else
        {
            count += 0 ;
        }
        }
        
        
        
        
    }

    // if (count > 0)
    // {
    //     cout << "#Color" << endl ;
    // }
    // else
    // {
    //     cout << "#Black&White" << endl ;
    // }

    cout << count << endl ;
    
    
    
    
    
    return 0;
}