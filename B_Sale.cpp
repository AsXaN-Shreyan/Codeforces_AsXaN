#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ;
    cin >> n >> m ;

    vector < int > a(n , m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin() , a.end());

    

    int sum = 0 ;

    for (int i = 0; i < m; i++)
    {
        
        if (a[i] > 0)
        {
            a.pop_back();
        }
        else
        {
            sum = sum - a[i];
        }
        
        
    }

    //
    

    cout << sum << endl ;
    
    
    
    
    
    return 0;
}