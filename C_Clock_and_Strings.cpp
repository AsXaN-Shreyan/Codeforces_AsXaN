#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        int a , b, c, d ;
        cin >> a >> b >> c >> d ;

        string s = "";

        for (int i = 0; i <= 12; i++)
        {
            if (a == i || b == i)
            {
                s += 'a';
            }
            if (c == i || d == i)
            {
                s += 'b';
            }
            
        }

        if (s == "abab" || s == "baba")
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