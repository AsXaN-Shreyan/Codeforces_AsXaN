#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int police = 0;
    int crime = 0 ;

    vector<int> s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i] ;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == -1)
        {
            if (police > 0)
            {
                police-- ;
            }
            else
            {
                crime++ ;
            } 
            
        }

        else
        {
            police += s[i] ;
        }
        
        
    }


    cout << crime << endl ;
    
    
    
    return 0;
}