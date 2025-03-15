#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , q ;
    cin >> n ;

    vector < int > a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] ;
    }

    cin >> q ;

    vector < int > b(q);

    for (int i = 0; i < q ; i++)
    {
        cin >> b[i] ;
    }

    sort(a.begin() , a.end());

    

    // for (int i = 0; i < q; i++)
    // {
    //     int count = 0 ;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (b[i] >= a[j])
    //         {
    //             count++ ;
    //         }
            
    //     }

    //     cout << count << endl ;
        
    // }
    
    for (int i = 0; i < q; i++) {
        
        int count = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        
        cout << count << endl;
    }
    
    
    
    return 0;
}