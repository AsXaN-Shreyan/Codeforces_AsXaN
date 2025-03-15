#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int count = 0 ;

    vector<int> a(n) ;
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    // {
    //     /* code */
    // }
    
    {
        // int a  , b ;

        // cin >> a >> b ;

        // if (a == b )
        // {
        //    count++ ; 
        // }

        cin >> a[i] >> b[i] ;

        if (a[i] != b[i])
        {
            count = 1 ;
        }
    
    }

    if (count == 1)
    {
        cout << "rated" << endl;
        return 0 ;
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                count = - 1 ;
            }
            
        }
        
    }
    
    

    //cout << count << endl ;
    
    if ( count == -1)
    {
        cout << "unrated" << endl ;
    }
    else 
    {
        cout << "maybe" << endl ;
    }
    
    
    
    
    return 0;
}