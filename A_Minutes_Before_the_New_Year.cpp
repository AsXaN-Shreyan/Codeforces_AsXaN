#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    int h , m ;
    int h1 , m1 ;
    int count = 0 ;

    for (int i = 0; i < t; i++)
    {
        cin >> h >> m ;

        h1 = (24-h);
        m1 = (60-m) ;

        count = (h1*60) + m1;

        cout << (count-60) << endl ;
        
    }
    
    
    return 0;
}