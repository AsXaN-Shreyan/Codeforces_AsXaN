#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    vector< int > a(n) ;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] ;

    }

    int sum = 0 ;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i] ;
    }

    for (int j = 0; j < n; j++)
    {
        int cookie = (sum - a[j]) ;


        if (cookie % 2 == 0 || cookie == 2)
        {
           count ++ ; 
        }
        
    }

    cout << count << endl ;
    

    return 0;
}