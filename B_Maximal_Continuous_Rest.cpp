#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    vector<int> a(n) ;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] ;
    }

    

    int count = 1 ;

    for (int j = (n-1); j > 0; j--)
    {
        if (a[j] == a[j-1])
        {
            count++ ;
        }
        
    }

    cout << count << endl ;
    
    
    

    
    return 0;
}