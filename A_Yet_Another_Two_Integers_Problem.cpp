#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    long long int a , b ;
    int count = 0 ;
    long long int d , result , result_ ;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b ;

        d = abs(a-b);

            result = abs((d+9) / 10);

        cout << result << endl ;


        
    }
    
    
    
    return 0;
}