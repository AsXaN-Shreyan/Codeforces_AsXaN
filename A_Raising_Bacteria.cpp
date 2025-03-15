#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  n  ;
    cin >> n ;

    long long  count = 0 ;

    while (n / 2 != 0)
    {
        if (n % 2 == 1)
        {
            count++;

           
        }

        n = n /2;

        
        
    }

    cout << count+1 << endl ;
    

    
    
    return 0;
}