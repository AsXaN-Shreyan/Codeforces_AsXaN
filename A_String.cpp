#include <bits/stdc++.h>
using namespace std;

int main()

{
    int t ;
    cin >> t ;

    while (t--)
    {
        string s ;
        cin >> s;

        int count = 0 ;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                count++ ;
            }
            else
            {
                count = count ;
            }
            
            
        }

        cout << count << endl ;


        
    }
    
    
    
    return 0;
}