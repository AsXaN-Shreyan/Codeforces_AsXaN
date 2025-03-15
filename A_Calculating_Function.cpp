#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, count  ;
    cin >> n;
    
    count = 0;

    if (n % 2 == 0)
    {
        count = n /2 ;
    }
    else
    {
        count = (-(n+1))/2 ;
    }
    
    cout << count << endl ;
    
    
    return 0;
}