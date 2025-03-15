#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int n , k ;

    

    while (t--)
    {
        cin >> n >> k ;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i] ;
        }

        int gold = 0 ;
        int give = 0 ;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                gold = gold + a[i] ;
            }
            else if (a[i] == 0 && gold > 0)
            {
                gold --;

                give++;
            }
            
            
        }

        cout << give << endl ;
        
        
    }
    
    
    
    return 0;
}