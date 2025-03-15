#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    string s ;
    cin >> s;

    int o = 0;
    int z = 0 ;

    for (int i = 0; i < t; i++)
    {
        if (s[i] == '0')
        {
            z++;
        }
        else
        {
            o++ ;
        }
        
        
    }

    int result = abs(o - z);

    cout << result << endl ;
    

    
    
    return 0;
}