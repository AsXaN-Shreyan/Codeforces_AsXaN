#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    vector<int> a(n) ;

    int minimum = 0 ;

    int index = 0 ;

    int count = 0 ;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] ;

        if (i == 0)
        {
             minimum = a[0]  ;
        }

        if (a[i] < minimum)
        {
            minimum = a[i];
            index = i ;
        }
    
    }

    sort(a.begin() , a.end());

    if (a[0] == a[1])
    {
        count = 1 ;
    }

    if (count == 1)
    {
        cout << "Still Rozdil" << endl;
    }
    
    else
    {
        cout << index+1 << endl ;
    }
    
    
    
    
    return 0;
}