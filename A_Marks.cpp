#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m , i , j ;

    cin >> n >> m ;

    string s[n];
    int  a[m];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i] ;
    }
    

    

    for (int i = 0; i < m; i++)
    {
        int count = 0 ;

        for (int j = 0; j < n; j++)
        {
            if (s[j][i] > count)
            {
                count = s[j][i] ;
            }
            
        }

        a[i] = count ;
        
    }

    int answer = 0 ;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == a[j])
            {
                answer++ ;
                break;
            }
            
        }

    }

    cout << answer << endl ;
    
    
    
    return 0;
}