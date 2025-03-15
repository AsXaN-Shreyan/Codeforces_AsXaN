#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ;
    cin >> n >> m ;

    int next_prime = 0 ;

    for (int i = (n+1); i < 50; i++)
    {
        int prime = 1;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
            
        }
        if (prime == 1 )
        {
            next_prime = i ;
            break;
        }
        
        
    }

    if (next_prime == m)
    {
        cout << "YES" << endl ;
    }
    else
    {
         cout << "NO" << endl ;
    }
    
    
    
    return 0;
}