#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = {"qwertyuiopasdfghjkl;zxcvbnm,./"};

    char button ;
    cin >> button ;

    int n = 0 ;

    if (button == 'R')
    {
        n = -1 ;
    }
    else
    {
        n = 1 ;
    }
    
    string f ;
    cin >> f ;

    for (int i = 0; i < f.size() ; i++)
    {
        for (int  j = 0; j < s.size(); j++)
        {
            if ( s[j] == f[i] )
            {
                f[i] = s[j+n];
                break;
            }
            
        }
        
    }

    cout << f << endl;
    
    
    return 0;
}