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

    int one = 0 ;
    int two = 0 ;
    int three = 0 ;
    int four = 0 ;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            one++ ;
        }
        if(a[i] == 2)
        {
            two++ ;
        }
        if (a[i] == 3)
        {
            three++ ;
        }
        if (a[i] == 4)
        {
            four++ ;
        }
        
        
    }

    cout << one << " "<< two << " " << three << " " << four << endl ;
    

    // cout << one << " " << two << " " << three << " " << four << endl ;
    
    
    return 0;
}