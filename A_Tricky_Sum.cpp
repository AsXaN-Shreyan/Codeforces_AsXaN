#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        int n ;
        cin >> n ;

        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == (1 << i))
                {
                    sum -= j;
                }

                else
                {
                    sum += j ;
                }
                

                
            }
            
        }

        cout << sum << endl ;
        
    }
    
    
    
    return 0;
}