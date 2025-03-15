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

        vector <int> a(n);

        int not_match = 0 ;

        int index = 1 ;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i] ;
        }
      
        int number = a[0];

        for (int i = 0; i < n; i++)
        {
            if (a[i] != number)
            {
                not_match++ ;
            }
            
            
        }
        if (not_match > 1)
        {
            cout << index << endl ;
        }
        else
        {
            
            for (int i = 0; i < n; i++)
            {
                if (a[i] != number)
                {
                    index = i+1 ;
                    cout << index << endl ;
                }
                
            }
            
        }
        
        

        
        
    }
    
    
    return 0;
}