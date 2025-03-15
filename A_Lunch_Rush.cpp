#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , k ;
    cin >> n >> k ;

    int f , t ;

    vector< int > a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> f >> t ;

        if (k >= t)
        {
            a[i] += f ;
        }
        else
        {
            a[i] += (f-(t-k));
        }
        
        
    }

    int answer = *max_element(a.begin() , a.end());

    cout << answer << endl ;
    
    
    
    return 0;
}