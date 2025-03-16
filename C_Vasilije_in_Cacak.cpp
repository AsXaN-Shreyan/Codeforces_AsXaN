#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        long long n , k , x ;

        cin >> n >> k >> x ;

        long long total_count = (n * (n+1))/2 ;

        long long k_count = (k * (k+1))/2 ;

        long long x_count = total_count - ((n-k) * (n-k+1))/2;

        if (k_count <= x and x <= x_count)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
        
        

    }
    
    
    
    return 0;
}