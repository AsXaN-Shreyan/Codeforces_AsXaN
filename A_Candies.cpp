#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        long long int n ;
        cin >> n ;

        long long int count = 0 ;

        int fuck = 0 ;

        for (int i = 2; i < 30; i++)
        {
            long long int fuck = (1 << i) - 1;

            if (n % fuck == 0)
            {
                cout << n/fuck << endl ;
        
                break;
            }
            
            
        }

        
    }
    

    
    
    return 0;
}