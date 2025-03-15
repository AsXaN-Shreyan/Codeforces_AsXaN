#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    long long int n , m;

    int count = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m ;

        count = max(n , m) ;
 
        count = count + 1;

        cout << count << endl ;
    }
    
    
    return 0;
}