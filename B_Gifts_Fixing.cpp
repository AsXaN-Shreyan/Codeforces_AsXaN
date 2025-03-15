#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        long long int n ;
        cin >> n ;
        long long int count = 0 ;
        


        vector<int> a(n) ;
        vector<int> b (n) ;
        int min_a = INT_MAX , min_b = INT_MAX ;


        for (int i = 0; i < n; i++)
        {
            cin >> a[i] ;
             min_a = min(min_a , a[i]);
            
        }
        for (int i = 0; i < n; i++)
        {
            
            cin >> b[i] ;
            min_b = min(min_b , b[i]);
        }

        

   

        for (int i = 0; i < n; i++ )
        {
            count +=  max((a[i] - min_a) , (b[i] - min_b));

    
            
        }

        cout << count << endl ;
        
      
    }
    
    
    
    return 0;
} 