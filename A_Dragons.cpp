#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int s , n , battle ;
    cin >> s >> n ;

    vector <pair < int , int >> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second ;
    }

    sort(a.begin() , a.end());

    for (int i = 0; i < n ; i++)
    {
        battle = 1 ;

        if (s <= a[i].first)
        {
            battle = 0 ;
            break;
        }
        else
        {
            s += a[i].second ;
        }
        
        
    }

    if (battle == 0)
    {
        cout << "NO" << endl ;
    }
    else
    {
        cout << "YES" << endl ;
    }
    
    
    
    


    
    
    
    return 0;
}