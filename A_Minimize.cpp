#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    int a , b ;
    int count = 0 ;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b ;

        count = abs(a-b);

        cout << count << endl ;
    }
    
    
    return 0;
}