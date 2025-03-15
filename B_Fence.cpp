#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ,  k , i;
    cin >> n >> k ;

    vector < int > a(n);

    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] ;

        //sum = a[0] + a[1] + a[2] ;
    }

    int sum = 0 ;


    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    

    int count = sum ;

    int index = 0 ;


    for (int i = 1; i <= (n-k); i++)
    {
        sum = sum - a[i-1] - a[i+k-1];

        if (sum < count)
        {
            count = sum ;

            index = i ;


        }
        
      
    }

    cout << index-1 << endl ;
    
    
    
    
    return 0;
}