#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n , m ;

    cin >> n ;
    cin >> m ;

    int count =0 ;

    if (n >= 27)
    {
        count = m ;
    }
    else
    {
        count = m % (1 << n);
    }
    
    cout << count << endl ;
    
    
    
    return 0;
}