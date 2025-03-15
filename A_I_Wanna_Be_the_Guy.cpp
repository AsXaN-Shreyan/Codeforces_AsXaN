#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    int p , q ;
    int arr[t+1] = {0};
    
    int level ;

    cin >> p ;
    for (int i = 0; i < p; i++)
    {
       cin >> level;
       arr[level] = 1 ; 
    }

    cin >> q ;
    for (int i = 0; i < q ; i++)
    {
       cin >> level;
       arr[level] = 1 ; 
    }

    for (int i = 1; i <= t; i++)
    {
        if (arr[i] == 0)
        {
            cout << "Oh, my keyboard!" << endl ;
            return 0 ;
        }
        
    }
    
    cout << "I become the guy." << endl ;
    
    return 0;
}