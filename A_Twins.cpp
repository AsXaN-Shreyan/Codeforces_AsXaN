#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    vector< int > a(n);
    
    int sum = 0 ;

    
    int count = 0 ;



    for (int i = 0; i < n; i++)
    {
        cin >> a[i] ;
        sum += a[i];
    }



    sort(a.begin() , a.end());

    int result = 0 ;


    for (int i = (n-1); i >= 0; i--)
    {
        result += a[i];

        sum -= a[i];

        count ++ ;

        if (result > sum)
        {
            break ;
        }
        
        
        
    }

    
    
    cout << count << endl ;

    
    
    
    return 0;
}