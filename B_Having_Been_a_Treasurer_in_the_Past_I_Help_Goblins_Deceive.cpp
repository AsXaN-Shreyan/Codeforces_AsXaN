#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t ;

    
    
    while (t--)
    {
    long long int n ;
    cin >> n ;

    string s ;

    cin >> s ;

    long long int count = 0 ;


    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-')
        {
            count++ ;
        }
        
    }

    long long int count_2 = n - count ;

    long long int ans = count/2 * (count - (count/2))* count_2 ;

    cout << ans << endl ;
}
    
    
    
    return 0;
}