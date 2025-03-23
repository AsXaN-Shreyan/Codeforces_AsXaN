#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >>  s;

    int count = 0 ;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'w')
        {
            count += 2 ;
        }
        else if (s[i] == 'v')
        {
            count++ ;
        }
        
        
    }

    cout << count << endl ;
    
    
    
    return 0;
}