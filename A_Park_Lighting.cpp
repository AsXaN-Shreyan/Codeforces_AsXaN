#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int n , m ;

    int count = 0 ;
    
    while(t--)
    {
        
        cin >> n >> m ;

        count = (((n*m) + 1)/2);

        cout << count << endl ;


    }
    
    
    return 0;
}