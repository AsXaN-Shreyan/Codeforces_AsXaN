#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n ;
    cin >> n ;

    long long int count = abs(n/10);
    long long int sum1 = abs(n % 10 );

    long long int sum2 = abs(((n % 100 )-sum1)/10);

    long long int fuck2 = abs(n % 10 );

    long long int fuck1 = abs(n/10);



    if (n > 0)
    {
        cout << n << endl ;
    }
    else
    {
        if (n <= -99)
        {
            if (sum1 > sum2)
            {
                cout << (n/10) << endl ;
            }
            else
            {
                cout << ((n/100)*10)-sum1 << endl ;
            }
            
            
        }
        else
        {
            if (fuck1 < fuck2)
            {
                cout << (n/10) << endl ;
            }
            else
            {
                cout << ((n))%10 << endl ;
            }
            
        }
        
        
        
        
    }
    

    
    
    
    return 0;
}